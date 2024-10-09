create database practice;
use practice;
create table accounts(
	AccNo int primary key,
    Bal int );
create table transactions(
	TransId int auto_increment primary key,
    SourceAcc int,
    DestAcc int,
    Amount int,
    foreign key(SourceAcc) references accounts(AccNo),
    foreign key(DestAcc) references accounts(AccNo));
insert into accounts values
	(1,1000),
    (2,500),
    (3,10000),
    (4,750),
    (5,100),
    (6,2500),
    (7,1240),
    (8,1000),
    (9,5500),
    (10,1010);

DELIMITER //
 
create procedure transfer_money(
	IN SourceAcc int,
    IN DestAcc int,
    IN TransferAmt int)
BEGIN
	DECLARE SourceBal int;
    DECLARE DestBal int;
    
    select Bal into SourceBal
    from accounts
    where AccNo=SourceAcc;
	select Bal into DestBal
    from accounts
    where AccNo=DestAcc;
    
    if SourceBal>=TransferAmt then
		Update accounts
        set Bal=SourceBal-TransferAmt
        where AccNo=SourceAcc;
        
        Update accounts
        set Bal=DestBal+TransferAmt
        where AccNo=DestAcc;
        
        insert into transactions (SourceAcc,DestAcc,Amount)
        values (SourceAcc,DestAcc,TransferAmt);
        
        commit;
        select 'Transaction Successful' as message;
        else
        select 'Transaction Failed' as message;
        end if;
	end;
    //
    DELIMITER ;

call transfer_money(1,2,250);
select * from accounts;
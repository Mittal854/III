#include<iostream>
using namespace std;
class matrix
{
    private:
        int mat[3][3];
        int i,j;
    public:
        void input();
        void display();
        matrix transpose();
        matrix add(matrix);
        matrix multiply(matrix);
};
void matrix::input()
{
    cout<<"Enter the elements of the matrix"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {  
            cin>>mat[i][j];
        }
    }
}
void matrix::display()
{
    cout<<"The matrix is"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}  
matrix matrix::transpose()
{
    matrix m1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m1.mat[i][j]=mat[j][i];
        }
    }
    return m1;
}
matrix matrix::add(matrix m2)
{
    matrix m3;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3.mat[i][j]=mat[i][j]+m2.mat[i][j];
        }
    }
    return m3;
}
matrix matrix::multiply(matrix m2)
{
    matrix m3;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3.mat[i][j]=0;
            for(int k=0;k<3;k++)
            {
                m3.mat[i][j]+=mat[i][k]*m2.mat[k][j];
            }
        }
    }
    return m3;
}
int main(){
    matrix m;
    m.input();
    m.display();
    matrix m1=m.transpose();
    cout<<"The transpose of the matrix is"<<endl;
    m1.display();
    matrix m2;
    m2.input();
    matrix m3=m.add(m2);
    cout<<"The addition of the two matrices is"<<endl;
    m3.display();
    matrix m4=m.multiply(m2);
    cout<<"The multiplication of the two matrices is"<<endl;
    m4.display();
    
    return 0;
}


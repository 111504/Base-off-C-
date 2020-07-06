#include <iostream>

using namespace std;
int main(){

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p = *arr;
    int **p2=&p;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<"---------use index-----------------"<<endl;
    cout<<&arr[0][0]<<" "<<&arr[0][1]<<" "<<&arr[0][2]<<" "<<endl;
    cout<<&arr[1][0]<<" "<<&arr[1][1]<<" "<<&arr[1][2]<<" "<<endl;
    cout<<&arr[2][0]<<" "<<&arr[2][1]<<" "<<&arr[2][2]<<" "<<endl;
    cout<<"---------use pointer---------------"<<endl;
    cout<<  *arr  <<" "<<*arr+1    <<" "<<*arr+2    <<endl;
    cout<<*(arr+1)<<" "<<*(arr+1)+1<<" "<<*(arr+1)+2<<endl;
    cout<<*(arr+2)<<" "<<*(arr+2)+1<<" "<<*(arr+2)+2<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<arr<<" "<<arr+1<<" "<<arr+2<<endl;

    cout<<"==================================================================================="<<endl;
    cout<<"value---------------operate--------"<<endl;
    cout<<arr[0][0]<<" "<<arr[0][1]<<" "<<arr[0][2]<<" "<<endl;
    cout<<arr[1][0]<<" "<<arr[1][1]<<" "<<arr[1][2]<<" "<<endl;
    cout<<arr[2][0]<<" "<<arr[2][1]<<" "<<arr[2][2]<<" "<<endl;
    cout<<"---------------------------------------------------"<<endl;
    cout<<*(*(arr+0))<<" "<<*(*(arr+1))<<" "<<*(*(arr+2))<<" "<<endl;
    cout<<*(*(arr+1))<<" "<<*(*(arr+1)+1)<<" "<<*(*(arr+1)+2)<<" "<<endl;
    cout<<*(*(arr+2))<<" "<<*(*(arr+2)+1)<<" "<<*(*(arr+2)+2)<<" "<<endl;


}

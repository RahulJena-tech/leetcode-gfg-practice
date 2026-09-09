#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<' ';
        }
        for(int j=0; j<2*i+1; j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<' ';
        }
        for(int j=0; j<2*i+1; j++){
            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=n; i>0; i--){
        cout<<" ";
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i-1; j++){
            cout<<'*';
        }
        cout<<endl;
    }
}

void pattern10(int n){
    int m = n+1;
    if(n%2==0) m = n;
    for(int i=0; i<2*n-1; i++){
        if(i<m){
            for(int j=0; j<=i; j++){
                cout<<'*';
            }
        }
        else{
            for(int j=0; j<2*n-i-1; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int start =1;
    for(int i=0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;

        for(int j=0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}

void pattern12(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int k=1; k<=space; k++){
            cout<<" ";
        }
        for(int l=i; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
        space-=2;
    }
}

void pattern13(int n){
    int j=1;
    for(int i=0; i<n; i++){
        for(int k=0; k<=i; k++){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n){
    for(int i=n-1; i>=0; i--){
        for(char ch = 'A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i=1; i<=n; i++){
        int j = n-i;
        for(int k=1; k<=j; k++){
            cout<<" ";
        }
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch;
        }
        for(char ch='A'+(i-2); ch>='A'; ch--){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern18(int n){
    char ch='A'+(n-1);
    for(int i=0; i<n; i++){
        for(char c='A'+(n-i-1); c<=ch; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

void pattern19(int n){
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<<"* ";
        }
        for(int k=0; k<(2*i); k++){
            cout<<"  ";
        }
        for(int l=n-i; l>0; l--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int m=0; m<n; m++){
        for(int o=0; o<=m; o++){
            cout<<"* ";
        }
        for(int p=2*(n-m-1); p>0; p--){
            cout<<"  ";
        }
        for(int q=0; q<=m; q++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern20(int n){
    for(int m=0; m<n; m++){
        for(int o=0; o<=m; o++){
            cout<<"* ";
        }
        for(int p=2*(n-m-1); p>0; p--){
            cout<<"  ";
        }
        for(int q=0; q<=m; q++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<<"* ";
        }
        for(int k=0; k<(2*i); k++){
            cout<<"  ";
        }
        for(int l=n-i; l>0; l--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int x = 5;
    pattern20(x);
    return 0;
}
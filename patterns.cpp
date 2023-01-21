#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    int i;
    for(i=0; i<n; i++){
        cout<<"*****"<<endl;
    }
}

void pattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout <<"*";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    } 
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n){ 
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}

// void pattern5(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i+1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

void pattern6(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
        cout << j;
    }
    cout << endl;
  }  
}

void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<< endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<< endl;
    }
}

/*void pattern9(int n){
     //print pattern 2 and then 5 
}*/

void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n){
    for(int i=0; i<n; i++){
        int start =1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }

        for(int j=1; j<=space; j++){
            cout << " ";
        }

        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space-=2;
    }
}

void pattern13(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num+=1;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i=n; i>=0; i--){
        for(char ch='A'; ch<='A'+(i-1); ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    for(int i=1; i<=n; i++){
        for(0  )
    }
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cout << "Enter number of lines of pattern: ";
        cin >> n;
        pattern15(n);
    }
    return 0;
}
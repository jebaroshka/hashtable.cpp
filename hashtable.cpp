#include <iostream>
using namespace std;

const int SIZE=10;
int table[SIZE];

void insert(int x) {
    int index=x%SIZE;
    for(int i=0;i<SIZE;i++) {
        int p=(index+i)%SIZE;
        if(table[p]==-1) {
            table[p]=x;
            cout<<"Account inserted\n";
            return;
        }
    }
    cout<<"Hash table full\n";
}

void search(int x) {
    int index=x%SIZE;
    for(int i=0;i<SIZE;i++) {
        int p=(index+i)%SIZE;
        if(table[p]==-1) break;
        if(table[p]==x) {
            cout<<"Account found at index "<<p<<endl;
            return;
        }
    }
    cout<<"Account not found\n";
}

void display() {
    cout<<"Hash Table:\n";
    for(int i=0;i<SIZE;i++)
        cout<<i<<" : "<<table[i]<<endl;
}

int main() {
    for(int i=0;i<SIZE;i++) table[i]=-1;

    int ch,x;

    do {
        cout<<"\n1.Insert 2.Search 3.Display 4.Exit\nChoice: ";
        cin>>ch;

        if(ch==1) {
            cout<<"Account number: ";
            cin>>x;
            insert(x);
        }
        else if(ch==2) {
            cout<<"Search account: ";
            cin>>x;
            search(x);
        }
        else if(ch==3)
            display();

    } while(ch!=4);

    return 0;
}

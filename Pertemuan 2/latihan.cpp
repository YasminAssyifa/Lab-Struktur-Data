#include <iostream>
using namespace std;

// membuat struct node yang berisi value dari node tersebut dan juga pointer ke node selanjutnya.
struct Node{
    int value;
    Node *next;
};

// node paling atas dari stack yang berisi NULL / kosong.
Node *top = NULL;

// apa itu push? untuk menambahkan node baru ke dalam stack
void push (int n) {
    Node *newNode = new Node; // membuat node baru di memori
    newNode -> value = n; //Untuk newnode, value dari node tersebut adalah n.
    newNode -> next = top; //dan untuk newnode juga, next dari node tersebut adalah top. basically node ini disambungkan ke top tadi.

    top = newNode; //nah untuk node baru ini bakalan jadi top dari stack.

    cout << n <<" ditambahkan ke stack!\n"; //deklarasi penambahan stack.
}

// nah untuk pop sendiri itu seperti namanya, mengeluarkan node paling atas dari stack
void pop() {
    if (top == NULL) // mengecek apakah node top kosong, kalau kosong tandanya stack belum terisi apa"
    {
        cout << "Stack kosong!\n";
        return;                  
    }

    //kalau top/stack tidak kosong, maka fungsi pop akan dilanjut.
    cout << top->value << " dihapus dari stack.\n"; //deklarasi penghapusan stack.

    // kita menggunakan temp untuk menghapus top.
    Node* temp = top; //node paling atas di letak di temp;
    top = top->next; // posisi top diubah ke node selanjutnya.
    delete temp; //temp dihapus.
}

// fungsi display menunjukkan isi dari stack.
void display() {
    if (top == NULL) //sama seperti fungsi pop, mengecek apakah node paling atas kosong atau tidak.               
    {
        cout << "Stack kosong!\n";   
        return;                      
    }

    //jika tidak kosong, maka isi dari stack akan dioutput.
    cout << "\nIsi stack: ";           
    Node* temp = top;                 

    // selama temp tidak sama dengan NULL, loop akan terus diulang dan isi dari stack akan terus di output.
    while (temp != NULL)      
    {
        cout << temp->value << " -> "; 
        temp = temp->next; //next ke node berikutnya
    }
    cout << "NULL\n";      
}

int main(){
    system("CLS");
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();
    return 0;
}

// yasmin kira tugasnya di kasih komen, hehe
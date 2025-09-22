#include<iostream>
using namespace std;
struct nodo{
    char nomb[20];
    nodo *sig;

};
nodo *crea_i(nodo *);
nodo *crea_f(nodo *);
void recorre(nodo *);
nodo *insertar_i(nodo *);
nodo *insertar_f(nodo *);
int main(){
    char codigo[20];
nodo *p=NULL;
int op;
do{
    system("cls");
    cout<<"\nLISTAS ENLAZADAS: ";
    cout<<"\n1. CREAR POR EL INICIO: ";
    cout<<"\n2. CREAR POR EL FINAL: ";
    cout<<"\n12. MOSTRAR ";
    cout<<"\n13. SALIIR: ";
    cout<<"\n\t opcion: ";
    cin>>op;
    switch(op){
        case 1:
        system("cls");
        p=NULL;
        p=crea_i(p);
        break;
        case 2:
        system("cls");
        p=NULL;
        p=crea_f(p);
        break;
        case 3:
        system("cls");
        p=insertar_i(p);
        break;
        case 4:
        system("cls");
        p=insertar_f(p);
        break;

    }

}while(op>0 && op<13);
system("pause");
    return 0;
}
nodo *crea_i(nodo *p){
    nodo *q;
    char op;
    do{
        system("cls");
        q=new(nodo);
        cout<<"ingresa nombre: ";
        cin>>q->nomb;
        q->sig=p;
        p=q;
        cout<<"\n\n MAS DATOS (s/n)?? ";
        cin>>op;

    }while(op== 's'|| op== 'S');
    return(p);

}
nodo *crea_f(nodo *p){
    nodo *q,*r;
    char op;
    do{
        system("cls");
        q=new(nodo);
        cout<<"ingrese el nombre: ";
        cin>>q->nomb;
        q->sig=NULL;
        if(p== NULL)
            p=q;
        else{
            r->sig=q;
        }
        r=q;
        cout<<"mas datos(s/n)  ";
        cin>>op;
    }while(op == 's' || op == 'S');
    return(p);
}
nodo *insertar_i(nodo *p){
    nodo *q;
    system("cls");
    cout<<"inserta dato por el inicio: ";
    q=new(nodo);
    cout<<"nombre: ";
    cin>>q->nomb;
    q->sig=p;
    p=q;
    return(p);

}
nodo *insertar_f(nodo *p){
    nodo *q, *r;
    system("cls");
    cout<<"\n\n insertando dato por el final...";
    q=new(nodo);
    cout<<"nombre: ";
    cin>>q->nomb;
    q->sig=NULL;
    r=p;
    if(p==NULL){
        p=q;
    }else{
        while(r->sig!= NULL){
            r=r->sig;
        }
        r->sig=q;
    }
return(p);
}
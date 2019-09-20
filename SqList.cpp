#include <iostream>
#define MAXSIZE 50      //定义线性表最大长度
typedef struct{         //
    int id;             //
    int score;          //
}ElemType;
typedef struct{
    ElemType *data;
    int length;
}SqList;
bool Init_SqList(SqList &L)
{
    L.data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
    if(L.data==NULL) return false;
    L.length = 0;
    return true;
}
bool Insert_SqList(SqList &L,ElemType e,int ad)
{
    if(ad<1||ad>L.length+1) return false;
    if(L.length>=MAXSIZE) return false;
    int i;
    for(i=L.length;i>=ad;i--)
    {
        L.data[i] = L.data[i-1]; 
    }
    L.data[ad-1] = e;
    L.length++;
    return true;
}
bool Delet_SqList(SqList &L,int ad)
{
    
}
void print(SqList L)
{
    int i;
    for(i=0;i<L.length;i++)
    {
    printf("id=%d,score=%d\n",L.data[i].id,L.data[i].score);
    }
}
int main()
{
    ElemType e1 = {150103001,50};
    ElemType e2 = {150103002,60};
    ElemType e3 = {150103003,70};
    ElemType e4 = {150103004,80};
    SqList sl;
    Init_SqList(sl);
    Insert_SqList(sl,e1,1);
    Insert_SqList(sl,e2,2);
    Insert_SqList(sl,e3,3);
    Insert_SqList(sl,e4,2);
    print(sl);
    return 0;
}
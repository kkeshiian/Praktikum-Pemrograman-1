#include <stdio.h>

int main(){
    char yourName[20], myNim[20], myClass[10], bornAt[50], myAdress[50], myHobby[50], myNumber[50];

    //input dari user
    printf("Nama : ");
    fgets(yourName, sizeof(yourName), stdin);
    printf("NIM : ");
    fgets(myNim, sizeof(myNim), stdin);
    printf("Kelas Paralel : ");
    fgets(myClass, sizeof(myClass), stdin);
    printf("Tempat/Tanggal Lahir : ");
    fgets(bornAt, sizeof(bornAt), stdin);
    printf("Alamat : ");
    fgets(myAdress, sizeof(myAdress), stdin);
    printf("Hobby : ");
    fgets(myHobby, sizeof(myHobby), stdin);
    printf("No. HP : ");
    fgets(myNumber, sizeof(myNumber), stdin);

    //menampilkan output
    printf("Nama                 : %s", &yourName);
    printf("NIM                  : %s", &myNim);
    printf("Kelas Paralel        : %s", &myClass);
    printf("Tempat/Tanggal Lahir : %s", &bornAt);
    printf("Alamat               : %s", &myAdress);
    printf("Hobby                : %s", &myHobby);
    printf("No. HP               : %s", &myNumber);
    return 0;
}
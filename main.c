//
//  main.c
//  loop
//
//  Created by Andry Chowanda on 18/10/21.
//

#include <stdio.h>

int main() {

    /*
    // 1. perhitungan grade
    int nilai = 0;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if(nilai >= 85) printf("Grade A \n"); //false
    else if (nilai >= 75 && nilai <= 84) printf("Grade B \n"); // 60 >= 75 (false) && 60 <= 84 (true) -> false and true = false
    else if (nilai >= 65 && nilai <= 74) printf("Grade C \n"); // 60 >= 64 (false) && 60 <= 74 (true) -> false and trus = false
    else if (nilai >= 55 && nilai <= 64) printf("Grade D \n"); // 60 >= 55 (true) && 60 <= 64 (true) -> true and true = true
    //else if (nilai <= 54) printf("Grade E \n");
    else printf("Grade E \n");
    */

    /*
    //2. ganjil genap
    int tanggal = 2;
    int angkaPlat = 1121;
    int khusus = 0; // kendaraan khusus bebas ganjil genap

    if (khusus == 1) printf("Boleh Masuk \n");
    else{
        if(tanggal % 2 == 0){ //tanggal genap
            if(angkaPlat % 2 == 0) printf("Boleh Masuk \n");
            else printf("Tidak Boleh Masuk \n");
        }
        else { //tanggal ganjil
            if(angkaPlat % 2 != 0) printf("Boleh Masuk \n");
            else printf("Tidak Boleh Masuk \n");
        }
    }
    */

    /*
    //3. calculator mini
    float a, b;
    char op;
    printf("Masukkan formula : ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op){
        case '+' : printf("Hasil %f %c %f = %f \n", a, op, b, a + b);break;
        case '-' : printf("Hasil %f %c %f = %f \n", a, op, b, a - b);break;
        case '/' : printf("Hasil %f %c %f = %f \n", a, op, b, a / b);break;
        case '*' : printf("Hasil %f %c %f = %f \n", a, op, b, a * b);break;
        default  : printf("Salah penulisan formula \n");
    }
    */

    /*
    // 4. Ternary Operator
    int angka = 1;
    //if(angka % 2 == 0) printf("Genap \n");
    //else printf("Ganjil");

    //condition      ? expresssionTrue   : expressionFalse
    (angka % 2 == 0) ? printf("Genap\n") : printf("Ganjil\n");
    */

    // 4. min ato max
    /*
    int a = 100;
    int b = 2;
    int max = 0;

    //if(a < b) max = b;
    //else max = a;

    //condition     ? expresssionTrue   : expressionFalse
    max = (a < b) ? b : a;

    printf("%d \n", max);*/

    // 5. Menu
    int pilih = 0;
    while(pilih !=4){
        printf("Selamat datang ke BINUS Malang \n");
        printf("=============================== \n");
        printf("1. Cek info BINUS Malang \n");
        printf("2. Cek info cuaca sekitar \n");
        printf("3. Cek nama Direktur Kampus BINUS Malang \n");
        printf("4. Keluar \n");
        printf("Masukkan Pilihan Anda = ");

        scanf("%d", &pilih);

        switch(pilih){
            case 1 : printf("Terletak di kompleks Araya\n");break;
            case 2 : printf("Sekarang 28 C\n");break;
            case 3 : printf("Bapak Dr. Boto Simatupang\n"); break;
            case 4 : printf("Terima kasih sudah mampir di BINUS Malang\n");break;
            default  : printf("Salah pilih nomor, pilih 1 - 4\n");
        }
    }
    return 0;
}

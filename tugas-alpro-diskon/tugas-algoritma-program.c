#include <stdio.h>

int main() {
    int tb;
    float dsc;

    printf("Masukkan Total Belanja: ");
    scanf("%d", &tb);

    switch (tb) {
        case 1 ... 99999:
            dsc = 0; 
            break;
        case 100000 ... 499999:
            dsc = 10;
            break;
        case 500000 ... 999999:
            dsc = 20;
            break;
        case 1000000 ... 1499999:
            dsc = 30;
            break;
        case 1500000 ... 1999999:
            dsc = 40;
            break;
        case 2000000 ... 2499999:
            dsc = 50;
            break;
        case 2500000 ... 2999999:
            dsc = 60;
            break;
        case 3000000 ... 3499999:
            dsc = 70;
            break;
        case 3500000 ... 3999999:
            dsc = 80;
            break;
        case 4000000 ... 4499999:
            dsc = 90;
            break;
        case 4500000 ... 5000000:
            dsc = 100;
            break;

        default:
            printf("Total belanja tidak valid.\n");
            break;
    }
    int hdisk,tab,bayar;
    hdisk = tb * (dsc/100);
    tab = tb - hdisk;
    printf("Total Belanja Awal : %d \n",tb);
    printf("Total Diskon : %.2f persen \n",dsc);
    printf("Total Akhir Belanja : %d \n",tab);
    printf("Masukan Total Pembayaran : ");
    scanf("%d", &bayar);
    int kemb = bayar-tab;
    if (kemb > 0)
    {
        printf("Kembalianmu %d \n",kemb);
    } else if (kemb == 0) {
        printf("Uangmu Pas, Tidak Ada Kembalian \n");
    } else {
        printf("Uangmu Tidak Cukup \n");
    }
    

    return 0;
}
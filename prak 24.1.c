#include <stdio.h>
#include <stdlib.h>
/*int r, q = 7;
int go_crazy(int *, int *);*/

int main()
{
    /*int y, x = 87;
    int *px;
    px = &x;
    y = *px;
    printf("Alamat x = %p\n", &x);
    printf("Isi px = %p\n", px);
    printf("Isi x = %d\n", x);
    printf("Nilai yang ditunjuk oleh px = %d\n", *px);
    printf("Nilai y = %d\n", y);
    printf("\n") ;
    printf("Alamat px = %p\n", &px);
    printf("Alamat y = %p\n", &y);*/

    /*float *pu, nu;
    double u = 1234.0;
    pu = &u;
    nu = *pu;
    printf("Alamat dari u = %p\n", &u);
    printf("Isi pu = %p\n", pu);
    printf("Isi u = %lf\n", u);
    printf("Nilai yang ditunjuk oleh pu = %f\n", *pu);
    printf("Nilai nu = %f\n", nu);
    printf("\n");
    printf("Alamat pu = %p\n", &pu);
    printf("Alamat nu = %p\n", &nu);*/

    /*float d = 54.5f, *pd;
    printf("Isi d mula-mula = %g\n", d);
    pd = &d;
    *pd += 10;
    printf("Isi d sekarang = %g\n", d);
    printf("\n");
    printf("Alamat d = %p\n", &d);
    printf("Alamat pd = %p\n", &pd);
    printf("Alamat *pd = %p\n", &*pd);*/

    /*int z = 20, s = 30, *pz, *ps;
    pz = &z;
    ps = &s;
    *pz += *ps;
    printf("z = %d\n", z);
    printf("s = %d\n", s);
    printf("\n");
    printf("Alamat z = %p\n", &z);
    printf("Alamat s = %p\n", &s);
    printf("Alamat pz= %p\n", &pz);
    printf("Alamat ps= %p\n", &ps);*/

    /*char c = 'Q', *cp = &c;
    printf("%c %c\n", c, *cp);
    c = '/';
    printf("%c %c\n", c, *cp);
    *cp = '(';
    printf("%c %c\n", c, *cp);
    printf("\n");
    printf("Alamat c = %p\n", &c);
    printf("Alamat cp = %p\n", &cp);*/

    /*int x = 1, y = 2, *ip;
    ip = &x;
    y = *ip;
    *ip = 3;
    printf("x = %d, y = %d", x, y);
    printf("\n");
    printf("Alamat x = %p\n", &x);
    printf("Alamat y = %p\n", &y);
    printf("Alamat ip = %p\n", &ip);*/

    /*int i1, i2, *p1, *p2;
    i1 = 9;
    p1 = &i1;
    i2 = *p1 / 2 - 2 * 3;
    p2 = p1;
    printf("i1=%d,i2=%d,*p1=%d,*p2=%d\n",i1,i2,*p1,*p2);
    printf("\n");
    printf("Alamat i1 = %p\n", &i1);
    printf("Alamat i2 = %p\n", &i2);
    printf("Alamat p1 = %p\n", &p1);
    printf("Alamat p2 = %p\n", &p2);*/

    /*int count = 10, *temp, sum = 7;
    temp = &count;
    *temp = 32;// count diganti ke 32
    temp = &sum;
    *temp = count;//Sum diganti dengan count yaitu 32
    sum = *temp * 4;
    printf("count=%d, *temp=%d, sum=%d\n", count,*temp, sum );
    printf("\n");
    printf("Alamat count = %p\n", &count);
    printf("Alamat temp = %p\n", &temp);
    printf("Alamat sum = %p\n", &sum);*/

    /*int count = 13, sum = 9, *x, *y;
    x = &count;
    *x = 27; //count diganti ke 27
    y = x; //y = alamat dari count
    x = &sum;
    *x = count; // sum diganti dengan 27
    sum = *x / 2 * 3; // 27 / 2 * 3 = 39
    printf("count=%d, sum=%d, *x=%d, *y=%d\n", count,sum,*x,*y); // x = 39 karena x = &sum
    printf("\n");
    printf("Alamat count = %p\n", &count);
    printf("Alamat sum = %p\n", &sum);
    printf("Alamat x = %p\n", &x);
    printf("Alamat y = %p\n", &y);*/

    /*int *ptr1 = &q;
    int *ptr2 = &q;
    //ptr1 dan 2 = 7
    r = go_crazy(ptr1, ptr2); // r = 15
    printf("q=%d, r=%d, *ptr1=%d,*ptr2=%d\n",q,r,*ptr1,*ptr2); //ptr1 dan 2 = 14 karena definisnya sama yaitu &q
    ptr2 = &r; //isi dari r adalah 12
    go_crazy(ptr2, ptr1);
    printf("q=%d, r=%d, *ptr1=%d, *ptr2=%d\n",q,r,*ptr1,*ptr2);*/

    return 0;
}

/*int go_crazy(int *p1, int *p2)//ke 2 = 15 dan 7
{
    int x = 5;
    r = 12;
    *p2 = *p1 * 2;// p2 diganti jadi 14 // p2 = 30
    p1 = &x;// p1 = 5 // p1 = 5
    return *p1 * 3; // 15 // dikedua tidak ada return
}*/

main(){char *p=s,*q=s;while(*p){if(*p!=64)putchar(*p);else{putchar(34);while(*q){putchar(*q);q++;}putchar(34);}p++;}}

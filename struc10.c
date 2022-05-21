# include <stdio.h>
# include <string.h>

struct Complex {
    int real;
    int img;
};

int main () {
    struct Complex number1 = {5, 10};
    struct Complex *ptr = &number1;
    printf("real part :- %d\n", ptr->real);
    printf("img part :- %d\n", ptr->img);

    return 0;
}
# include <stdio.h>
# include <string.h>

typedef struct address {
    int houseNo;
    int blockNo;
    char city[100];
    char state[100];
} add;

void PrintInfo (struct address add);

int main () {
    struct address add [5];

    printf("Enter for person 1 :-");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].blockNo);
    scanf("%s", &add[0].city);
    scanf("%s", &add[0].state);

    printf("Enter for person 2 :-");
    scanf("%d", &add[1].houseNo);
    scanf("%d", &add[1].blockNo);
    scanf("%s", &add[1].city);
    scanf("%s", &add[1].state);

    printf("Enter for person 3 :-");
    scanf("%d", &add[2].houseNo);
    scanf("%d", &add[2].blockNo);
    scanf("%s", &add[2].city);
    scanf("%s", &add[2].state);

    printf("Enter for person 4 :-");
    scanf("%d", &add[3].houseNo);
    scanf("%d", &add[3].blockNo);
    scanf("%s", &add[3].city);
    scanf("%s", &add[3].state);

    printf("Enter for person 5 :-");
    scanf("%d", &add[4].houseNo);
    scanf("%d", &add[4].blockNo);
    scanf("%s", &add[4].city);
    scanf("%s", &add[4].state);
    
    PrintInfo(add[0]);
    PrintInfo(add[1]);
    PrintInfo(add[2]);
    PrintInfo(add[3]);
    PrintInfo(add[4]);

}

void PrintInfo (struct address add) {
    printf("address is :- %d, %d, %s, %s\n", add.houseNo, add.blockNo, add.city, add.state);
}
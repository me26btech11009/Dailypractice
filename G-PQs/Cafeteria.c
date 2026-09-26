#include<stdio.h>
/*
displayMenu() — show menu and stock.
findItemIndex() — convert an item code into an array index, or report not found.
takeOrder() — collect and validate item quantities.
calculateBill() — compute subtotal, discount, tax, and final total.
printReceipt() — print the completed receipt.
showReport() — display session statistics.
restockItem() — validate and update stock.
*/

void displaymenu();
void restock();
int calcBill();
void ShowReport();
void printReciept();
int option();


int main(){
    int opt=option();


    int stock[9]={100,100,100,100,100,100,100,100};
    int price[9]={10, 20,120,50,80,95,25,40};
    char items[1000][100]={"Coffee", "Milkshake" ,"Pizza", "Pastha", "Burger", "Sandwich", "Coockies", "Ice-cream"};
    int selected[]={0,0,0,0,0,0,0,0};
    

    while(opt!=4){
        if(opt==1){
            displaymenu(items,stock,price);
            int Gtl=calcBill(stock,price,selected);
            printReciept(selected,items,price,Gtl);
            opt=option();
        }
        else if(opt==2){
            restock(items,stock,price);
            opt=option();
        }
        else if(opt==3){
            ShowReport(items,stock,price,selected);
            opt=option();
        }

    }
    if(opt ==4){
        printf("programme closed .");
    }


    return 0;

}




void displaymenu(char it[1000][100],int s[],int p[]){

    for(int i=0; it[i][0]!='\0';i++){
        printf("%d . %s  -->  %d  ======>%d /-\n",i+1,it[i],s[i],p[i]);
    }
}
void restock(char it[1000][100], int s[],int p[]){
    for(int k=0;it[k][0]!='\0';k++){
        printf("enter the new stock of the respective items :\n");
        printf("%s -->",it[k]);
        scanf("%d",&s[k]);
    }
}
int calcBill(int s[],int p[],int selected[]){
    printf("select items using sr.no and their quantity. (To exit,enter 10) .\n");
    int choice;
    scanf("%d",&choice);
    int subtotal=0;
    while(choice!=10){
        if(s[choice-1]>0){
            int quantity=0;
            
            
            printf("enter the quantity :\n");
            scanf("%d",&quantity);
            selected[choice-1]+=quantity;
            subtotal+=(p[choice-1])*quantity;
            s[choice-1]=s[choice-1]-quantity;
            scanf("%d",&choice);
        }
        else{
            printf("there is no stock for the above selected item .please choose other item \n");
            scanf("%d",&choice);
        }
    }
    int Gtotal;
    if(subtotal<500){
        Gtotal=subtotal;
    }
    else if(subtotal>=500 && subtotal<999){
        Gtotal=subtotal-(subtotal*5/100);
    }
    else{
        Gtotal=subtotal-(subtotal*10/100);
    }
    return Gtotal;
}
void printReciept(int selected[9],char it[1000][100],int p[9],int GTl){
    printf("___________________________\n");
    printf("----*COLLEGE CAFETERIA*----\n");
    printf("___________________________\n");
    printf("    --->Your Bill<---  \n");
    printf("---------------------------\n");
    for(int i=0; it[i][0]!='\0' ;i++){
        if(selected[i]!=0){
            printf("%s --> %d , %d/-\n",it[i],selected[i],p[i]*selected[i]);
        }
    }
    printf("your grand total is (inc. discount): %d\n",GTl);
    printf("___________________________\n");
    printf("--Thankyou,Visit Again--\n");
    printf("---------------------------\n");
}

void ShowReport(char it[1000][100], int s[], int p[],int selected[]){
    printf("____________________\n");
    printf("--Repor of the Day--\n");
    int totalsales=0;
    int totalprofit=0;
    for(int i=0;s[i]!='\0'; i++){
        printf("%s --> Total Qty sold ==> %d\n",it[i],selected[i]);
        totalsales+=(selected[i]);
        totalprofit+=(selected[i])*p[i];
    }
    printf("-------------------------------\n");
    printf("Total items sold today : %d\n",totalsales);
    printf("-------------------------------\n");
    printf("Total profit of the day : %d/-\n",totalprofit);
    printf("________________________________\n");
}

int option(){
    int opt;
    printf("1. log a new customer \n");
    printf("2. Restock the items\n");
    printf("3. view report of the day\n");
    printf("4. Exit the system .\n");
    printf("choose the option :");
    scanf("%d",&opt);
    return opt;   
}
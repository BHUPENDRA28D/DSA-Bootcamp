  #include<stdio.h>
  #include<string.h>
  struct Book{
    int id;
    char title[20];
    float price;
  };
//   Function call
  struct Book input(){
    struct Book a;
    
    printf("\n Enter Book id :: ");
    scanf("%d",&a.id);
    fflush(stdin);
    printf("\n Enter Book Title :: ");
    gets(a.title);
    printf("\n Enter Book Price :: ");
    scanf("%f",&a.price);
    return a;
     
  }
//   Function to display 
void display(struct Book* a){

    printf("\n_______________________\n");
    printf("Id = %d    Title = %s    Price = %.2f",a->id,a->title,a->price);
    printf("\n_______________________\n");
}

  int main(){
     struct Book b1,b2[5];
      
      b1.id = 345;
      strcpy(b1.title,("Python Notes"));
      b1.price= 345.00;

      printf("\n id = %d\n title = %s\n price = %f\n",b1.id,b1.title,b1.price);
      
      for(int i=0;i<5;i++){
        b2[i]=input();
      }

       for(int i=0;i<5;i++){
        display(&b2[i]);
      }
      


      


    //   b1 = input();
    //   display(b1);

    return 0;
  }
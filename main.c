#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 void triangle(){ //��genin alan�

        int base,top;


        printf(" \nEnter the length of the base of the triangle: ");
        scanf("%d", &base);

        printf("\nEnter the length of the top of the triangle: ");
        scanf("%d", &top);

        int result = (base*top)/2;
        printf("\nArea Of Triangle : %d",result);
    }
    
    void triangle2(){ //��genin �evresi
    	int edge1,edge2,edge3;
    	
    	printf("\nplease enter edge1 :");
    	scanf("%d",&edge1);
    	
    	printf("\nplease enter edge2 :");
    	scanf("%d",&edge2);
    	
    	printf("\nplease enter edge3 :");
    	scanf("%d",&edge3);
    	
    	int result=(edge1+edge2+edge3);
    	printf("\nperimeter of triangle :%d",result);
	}
    
    void Circle(){ //dairenin �ecvresi
    	
    	int radius;
    	float pi=3.14;
    	
    	
    	
        printf("\nplease enter radius");
        scanf("%d", &radius);

      
        int result = 2*pi*radius;
        printf( "\ncircumference of the circle :%d",result);
	}
	
	void Circle2(){ //dairenin alan�
		int radius;
		float pi=3.14;
		
		printf("\nplease enter radius");
        scanf("%d", &radius);

      
        int result = pi*radius*radius;
        printf( "\narea of the circle:%d",result);
		
		
	}
	
	void Square(){ //karenin alan�
		int edge;
		
		printf("\nplease enter the edge");
		scanf("%d",&edge);
		
		int result=edge*edge;
		printf("\nkarenin alan�:%d",result);
		
	}
	
	void Square2(){//karenin �evresi
		int edge;
		
		printf("\nplease enter the edge");
		scanf("%d",&edge);
		
		int result=edge*4;
		printf("\nkarenin alan�:%d",result);
		
	}
	
	void Rectangle(){ //dikd�rtgenin �evrsi
		int short_edge;
		int long_edge;
		
		printf("\nplease enter the short edge:");
		scanf("%d",&short_edge);
		
		printf("\nplease enter the long edge:");
		scanf("%d",&long_edge);
		
		int result=(short_edge+long_edge)*2;
		printf("\nperimeter of rectangle : %d",result);
		
	}
	
	void Rectangle2(){//dikd�rtgenin alan�
		int short_edge;
		int long_edge;
		
		printf("\nplease enter the short edge:");
		scanf("%d",&short_edge);
		
		printf("\nplease enter the long edge:");
		scanf("%d",&long_edge);
		
		int result=short_edge*long_edge;
		printf("\nperimeter of rectangle : %d",result);
		
	}




int main(int argc, char *argv[]) {
	
	
    int geo_shape;
    int choose;


  



    printf("WELCOME TO THE AREA AND PER�METER CALCULATOR APPL�CAT�ON ! \n\n");

    printf("1)Triangle (��gen)\n 2)Circle (daire)\n 3)Square (kare)\n 4)Rectangle (dikd�rtgen)\n\n");
    printf("\n\nSelect the geometric shape you want to calculate : ");
    scanf("\n\n\n %d",&geo_shape);
    
    

    while (1){
        if(geo_shape == 1){
            printf("--------------------------------\n\n\n\n");
            printf("You choosed the Triangle !\n");
            printf("1) Area Calculating\n2) Perimeter Calculating\n3) EX�T\n");
            printf("\n\n\nPlease choose what you want with Triangle :");
            scanf("\n\n\n %d",&choose);
            if(choose == 1 ){
                printf("You choosed the Are of Triangle");
                triangle();
            }else if (choose == 2 ){
                printf("You choosed the Perimeter of Triangle");
                triangle2();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }

        }
        
        
        
        else if(geo_shape==2){
        	printf("--------------------------------\n");
        	printf("You choosed the Circle !\n");
        	printf("1) Area Calculating\n2) Perimeter Calculating\n3) EX�T\n");
        	printf("Please choose what you want with Circle :");
            scanf("%d",&choose);
            if(choose==1){
            	printf("You choosed the Are of Circle");
            	Circle2();
            }
            else if (choose == 2 ){
                printf("You choosed the Perimeter of Circle");
                Circle();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
            	
			}
			
			else if(geo_shape==3){
        	printf("--------------------------------\n");
        	printf("You choosed the Square !\n");
        	printf("1) Area Calculating\n2) Perimeter Calculating\n3) EX�T\n");
        	printf("Please choose what you want with Square :");
            scanf("%d",&choose);
            if(choose==1){
            	printf("You choosed the Are of Square");
            	Square();
            	
            }
            else if (choose == 2 ){
                printf("You choosed the Perimeter of Square");
                Square2();
                
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
            	
			}
			
			else if(geo_shape==4){
        	printf("--------------------------------\n");
        	printf("You choosed the Square !\n");
        	printf("1) Area Calculating\n2) Perimeter Calculating\n3) EX�T\n");
        	printf("Please choose what you want with Square :");
            scanf("%d",&choose);
            if(choose==1){
            	printf("You choosed the Are of Rectangle");
            	Rectangle2();
            	
            }
            else if (choose == 2 ){
                printf("You choosed the Perimeter of Rectangle");
                Rectangle();
            }else if(choose == 3){
                printf("Exiting The Programme..");
                break;
            }else{
                printf("Wrong Entry ! Please chech your selection.");
            }
            	
			}
		
        	
		}
		
		 return 0;

    }

	
	
	
	
	
	


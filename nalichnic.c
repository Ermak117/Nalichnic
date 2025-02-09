#include<stdio.h>
 
int main(){
    float width;
    float height;
    int sum;
    int nomer=1;
    float summa;
    int wverh, wbok, wniz; // ширина наличника Верхнего / Бокового / Нижнего
    int price_wverh, price_wbok, price_wniz ;// Цена наличника Верхнего / Бокового / Нижнего
    
// Указываем ширину наличников
printf("Укажите требуемую ширину наличников:\n"); 
printf("\n"); 
do{
    printf("Ширина верхнего наличника (мм): ");
    scanf("%d",&wverh);
    while(getchar() !='\n');
    }
while (wverh < 1);
do{
    printf("Ширина бокового наличника (мм): ");
    scanf("%d",&wbok);
while(getchar() !='\n');
    }
    while (wbok < 1);
do{
    printf("Ширина нижнего наличника  (мм): ");
    scanf("%d",&wniz);
while(getchar() !='\n');
    }
    while (wniz < 1);
    printf("-------------------------------------------------------\n");    
 
while (1){
    printf("Окно № %d\n", nomer++);
//Ввод данных размеров и количества
do{
    printf("Ширина окна (мм): ");
    scanf("%f",&width);
    while(getchar() !='\n');
    }
while (width < 1);
do{
    printf("Высота окна (мм): ");  
    scanf("%f",&height);
    while(getchar() !='\n');
    }
while (height < 1);
do{
    printf("Количество  (шт): ");  
    scanf("%d",&sum);
while(getchar() !='\n');
    }
    while (sum < 1);
    printf("-------------------------------------------------------\n");
    printf("Размеры окна ШхВ %2.0f х %2.0f%s %d%s\n",width, height," мм -",sum," шт");
float area;
    area = (width/1000)*(height/1000);
//printf("Площадь окна %.2f%s | Общая площадь: %.2f%s\n",area,area*sum," м2"," м2" );
   printf("-------------------------------------------------------\n");
 
// Расчет наличника 
int wverh_sum = width - 20 + (wbok*2);
int wbok_sum = height + wniz +20;
int wniz_sum = width -20;
// Расчет погонных метров 
float wverh_pogon = wverh_sum * sum * 0.001;
float wbok_pogon = wbok_sum * (sum*2) * 0.001;
float wniz_pogon = wniz_sum * sum * 0.001;
 
   printf("Верхний наличник %.d x %d x 18 мм - %d шт | %.2f пог.м \n",wverh_sum, wverh,sum, wverh_pogon);
   printf("Боковой наличник %.d x %d x 18 мм - %d шт | %.2f пог.м \n", wbok_sum, wbok, sum*2,wbok_pogon); 
   printf("Нижний наличник  %.d x %d x 18 мм - %d шт | %.2f пог.м \n",wniz_sum, wniz,sum, wniz_pogon); 
   printf("--------------------------------------------------------\n");
 
// Определяем цену ВЕРХНЕГО НАЛИЧНИКА в зависимости от ширины наличника
 if(wverh <= 100){
    price_wverh = 300;
}else if(wverh > 100 && wverh <= 150){
    price_wverh = 350;
}else if(wverh > 150 && wverh <= 200){
    price_wverh =400;
}else{
    printf("Цена не определена\n");
     return 1;   
}  
// Определяем цену БОКОВОГО НАЛИЧНИКА в зависимости от ширины наличника
 if(wbok <= 100){
    price_wbok = 300;
}else if(wbok > 100 && wbok <= 150){
    price_wbok = 350;
}else if(wbok > 150 && wbok <= 200){
    price_wbok =400;
}else{
    printf("Цена не определена\n");
     return 1;   
} 
// Определяем цену БОКОВОГО НАЛИЧНИКА в зависимости от ширины наличника
 if(wniz <= 100){
    price_wniz = 300;
}else if(wniz > 100 && wniz <= 150){
    price_wniz = 350;
}else if(wniz > 150 && wniz <= 200){
    price_wniz =400;
}else{
    printf("Цена не определена\n");
     return 1;   
} 
summa = price_wverh * wverh_pogon + price_wbok * wbok_pogon + price_wniz * wniz_pogon;
printf("Стоимость материала %.2f%s\n", summa, " руб.");
 
printf("\n");
}
 return 0;   
}
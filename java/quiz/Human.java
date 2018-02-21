/*
人間クラス
*/
public class Human{

   private String  name;
   private int     height;
   private int     weight;

   public Human(String n,int h,int w){
       this.name   = n;
       this.height = h;
       this.weight = w;
   }
   String getName(){
       return name;
   }
   int getHeight(){
        return height;
   }
   int getWeight(){
       return weight;
   }
   void gainWeight(int w){
       weight += w;
   }
   void reduceWeight(int w){
       weight -= w;
   }
}

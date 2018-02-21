
public class Car{

    private String name;
    private int    number;

    private int    width;
    private int    height;
    private int    length;

    private double x;
    private double y;
    
    private double tankage; //タンク容量
    private double fuel;    //残燃料
    private double sfc;     //燃費
    
    //テストコンストラクタ
    public Car(){
    }

    public Car( String name, int number, int width, int  height,
         int length, double y, double tankage, double fuel, double sfc){ 

        this.name = name;
        this.number = number;

        this.width = width;
        this.height = height;
        this.length = length;

        this.x = x;
        this.y = y;
        
        this.tankage = tankage;
        this.fuel = (tankage > fuel) ? fuel : tankage;
        this.sfc = sfc;     //燃費


    }
    public double getX(){return x;}
    public double getY(){return y;}
    public double getFuel(){return fuel;} 

    public void putSpec(){
        System.out.println("名前     : " + name);   
        System.out.println("ナンバー : " + number);     
        System.out.println("幅       : " + width);  
        System.out.println("高さ     : " + height); 
        System.out.println("長さ     : " + length); 
        System.out.println("タンク   : " + tankage);
        System.out.println("燃費     : " + sfc);    
    }

    //X方向にdx、Y方向にdy移動
    public boolean move(double dx, double dy){
        
        double dist = Math.sqrt(dx * dx + dy * dy);
        double useFuel = dist / sfc; //移動に必要な燃料
        
        if(useFuel <= fuel/*移動が可能ならば*/){
            this.x += dx;
            this.y += dy;

            fuel -= useFuel;
            return true;
        }else{
            System.out.println("燃料不足"); 
            return false;
        }
    }
    
    //dfリットル給油
    void reFuel(double df){
        if(df > 0){
            this.fuel += df;
            if(tankage < fuel)
                this.fuel = tankage;
        }
    }
}

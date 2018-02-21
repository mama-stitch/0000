public class CarTester{
    public static void main(String[] args){
        Car car1 = new Car();
        Car car2 = new  Car( "KLX!", 1234, 3000, 1000,
         5000, 0.0, 100.0, 50.0, 9.8);

        car1.putSpec();
        System.out.print("\n");
        car2.putSpec();
    }

}

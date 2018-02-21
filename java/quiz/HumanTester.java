public class HumanTester{
    public static void main(String[] args){
        Human suzuki = new Human("鈴木",168,60);
        Human takada = new Human("高田",185,76);



        System.out.println(suzuki.getName());
        System.out.println(suzuki.getHeight());
        System.out.println(suzuki.getWeight());

        System.out.println(takada.getName());
        System.out.println(takada.getWeight());
        System.out.println(takada.getWeight());
    }
}

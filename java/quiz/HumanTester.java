public class HumanTester{
    public static void main(String[] args){
        Human suzuki = new Human();
        Human takada = new Human();

        suzuki.name = "鈴木";
        suzuki.height = 168;
        suzuki.weight = 60;

        takada.name = "高田";
        takada.height = 185;
        takada.weight = 76;

        System.out.println(suzuki.name);
        System.out.println(suzuki.height);
        System.out.println(suzuki.weight);

        System.out.println(takada.name);
        System.out.println(takada.height);
        System.out.println(takada.weight);
    }
}

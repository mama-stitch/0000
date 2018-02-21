PUblic class HumanTester{
    public static void main(String[] args){
        Human suzuki = new Human("鈴木",168,60);
        Human takada = new Human("高田",185,76);



        System.out.println(suzuki.getName());
        System.out.println(suzuki.getHeight());
        System.out.println(suzuki.getWeight());

        System.out.println(takada.getName());
        System.out.println(takada.getWeight());
        System.out.println(takada.getWeight());
        //10kg増える
        takada.gainWeight(10);
        System.out.println(takada.getName()
                + "の体重は" + takada.getWeight());
        //３９ｋｇやせる
        takada.reduceWeight(39);
        System.out.println(takada.getName()
                + "の体重は" + takada.getWeight());
 
        System.out.println("名前 : " + suzuki.getName());
        System.out.println("身長 : " + suzuki.getHeight());
        System.out.println("体重 : " + suzuki.getWeight());

        System.out.println("名前 : " + takada.getName());
        System.out.println("身長 : " + takada.getHeight());
        System.out.println("体重 : " + takada.getWeight());
    }
}

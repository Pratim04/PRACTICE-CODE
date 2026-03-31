class Animal{
    void Birth() {
        System.out.println("All are animals");
    }
}

class Monkey extends Animal {
    void Survive() {
        System.out.println("Born to be Survive...");
    }
}

class Human extends Monkey {
    void Evolution() {
        System.out.println("Improved day by day!...");
    }
}

public class multilevelInheritance {
    public static void main(String[] args) {
        Human H = new Human();
        H.Birth();
        H.Survive();
        H.Evolution();
    }
}

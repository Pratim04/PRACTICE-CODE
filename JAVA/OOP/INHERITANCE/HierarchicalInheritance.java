class Animal{
    void Birth() {
        System.out.println("All are animals");
    }
}

class Monkey extends Animal {
    void Survive() {
        System.out.println("Born ton be Survive...");
    }
}

class Human extends Animal {
    void Evulation() {
        System.out.println("Improved day by day!...");
    }
}

public class HierarchicalInheritance {
    public static void main(String[] args) {
        Human H = new Human();
        H.Birth();
        H.Evulation();

        Monkey M = new Monkey();
        M.Birth();
        M.Survive();
    }
}

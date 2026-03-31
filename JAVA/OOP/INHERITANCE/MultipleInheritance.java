interface Flyable {
    void fly();
}

interface Swimmable {
    void swim();
}

class Duck implements Flyable, Swimmable {
    public void fly() {
        System.out.println("Duck is flying!");
    }

    public void swim() {
        System.out.println("Duck is Swimming!");
    }

    void Quack() {
        System.out.println("Duck is Quacking!");
    }
}

public class MultipleInheritance {
    public static void main(String[] args) {
        Duck d = new Duck();
        d.fly();
        d.swim();
        d.Quack();
    }
}

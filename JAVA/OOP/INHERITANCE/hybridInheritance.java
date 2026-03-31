// Grandparent class
class Animal {
    void eat() {
        System.out.println("Animal is eating!");  // defined here!
    }
}

// Child 1 of Animal
class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking!");
    }
}

// Child 2 of Animal
class Cat extends Animal {
    void meow() {
        System.out.println("Cat is meowing!");
    }
}

// Interface
interface Pet {
    void play();
}

// DogCat extends Cat
class DogCat extends Cat implements Pet {
    public void play() {
        System.out.println("DogCat is playing!");
    }

    void special() {
        System.out.println("I am a special DogCat!");
    }
}

public class hybridInheritance {
    public static void main(String[] args) {
        DogCat dc = new DogCat();
        dc.eat();       // Animal → Cat → DogCat ✓
        dc.meow();      // from Cat ✓
        dc.play();      // from Pet interface ✓
        dc.special();   // DogCat's own ✓
    }
}
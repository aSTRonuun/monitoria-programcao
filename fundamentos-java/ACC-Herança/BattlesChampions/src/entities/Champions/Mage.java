package entities.Champions;

import java.util.List;
import java.util.Random;

import entities.NameGenarator;


public class Mage extends Trol{
    
    int mana;

    public Mage(){
        random = new Random();
        name = new NameGenarator().generate(random.nextInt(5) + 3);
        str = random.nextInt(5) + 7;
        hp = random.nextInt(30) + 30;
        mana = random.nextInt(20) + 10;
    }

    public String getName(){
        return "🧙" + name;
    }

    public void attack(Player other) {
        if(other != null && other.isAlive()){
            other.takeDemage(str, this);
            if(mana > 0)
                mana -= 2;
        }
    }

    public Player selectTarget(List<Player> lista) {
        if(lista.size() == 1 && lista.get(0) == this)
            return null;
        while(true){
            Player chosen = lista.get(random.nextInt(lista.size()));
            if(chosen != this)
                return chosen;
        }
    }

    public void takeDemage(int qtd, Player other) {
        hp -= qtd;
        if(random.nextInt(2) == 1){
            mana += 3;
            System.out.print("Mage: 💫 won mana ");
        }
    }

    public boolean ultimate(Player other){
        Random random = new Random();
        int probability = random.nextInt(10);
        if(this.hp <= 30 && this.mana >= 7 && probability < 4){
            this.hp += 15;
            this.mana -= 5;
            System.out.print("ULTIMATE: 💚 healing spell");
            return true;
        }
        return false;
    }

    public String toString(){
        return getName() + ":" + str + ":" + hp + ":" + mana;
    }
}
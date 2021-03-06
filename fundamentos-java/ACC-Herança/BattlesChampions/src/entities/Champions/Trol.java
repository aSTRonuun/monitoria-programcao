package entities.Champions;

import java.util.List;
import java.util.Random;

import entities.NameGenarator;

public class Trol implements Player{
    protected String name;
    int str;
    int hp;
    Random random;

    public Trol(){
        random = new Random();
        name = new NameGenarator().generate(random.nextInt(2) + 2);
        str = random.nextInt(5) + 3;
        hp = random.nextInt(25) + 20;
    }

    public String getName() {
        return "🧟" + name;
    }

    public int getHp(){
        return hp;
    }

    public boolean isAlive(){
        if(hp > 0)
            return true;
        return false;
    }

    public Player selectTarget(List<Player> lista) {
        return lista.get(random.nextInt(lista.size()));
    }

    public void attack(Player other) {
        if(other != null && other.isAlive())
            other.takeDemage(str, this);
    }

    public void takeDemage(int qtd, Player other) {
        hp -= qtd;
    }

    public boolean ultimate(Player other){
        int probability = random.nextInt(10);
        if(this.hp <= 15 && probability <5){ 
            if(other != null && other.isAlive())
            other.takeDemage(str*2, this);
            System.out.print("ULTIMATE: 🗡 double attack");
            return true;
        }
        return false;
    }

    public String toString() {
        return  getName() + ":" + str + ":" + hp;
    }
}

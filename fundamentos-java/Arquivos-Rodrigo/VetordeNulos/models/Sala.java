package models;
import java.util.ArrayList;
public class Sala{
        
/* [3.0 P] Inicializando.
Iniciar a sala de cinema.
Ao iniciar, você deve informar quantos assentos existem na sua sala.
Mostrar o estado da sala, escrevendo um - para cada cadeira vazia.
Se uma nova sala for iniciada, apague todas as informações da sala antiga.

[4.0 P] Reservas.
reservar uma cadeira para um cliente passando id, telefone e número da cadeira.
avise que houve erro ao tentar colocar duas pessoas na mesma cadeira.
avise que houve erro ao tentar colocar duas pessoas com mesmo id na sala.
atualize a função show para mostrar os clientes onde estiverem sentados.

[3.0 P] Cancelamentos.
Cancele reserva passando o id do cliente.
*/

    private ArrayList<Client> cadeiras;

    ArrayList<Client> getCadeiras(){
        this.cadeiras = new ArrayList<Client>();
        return cadeiras;
    }

    public Sala(int capacidade){
        this.cadeiras = new ArrayList<Client>(capacidade);
        for(int i = 0; i < capacidade; i++){
            this.cadeiras.add(null);
        }
    }


    public boolean reservar(String id, String fone, int idCadeira){

        if(this.cadeiras.get(idCadeira) != null){
            System.out.println("fail: cadeira ja esta ocupada");
            return false;
        }
        
        for(int i = 0 ; i < this.cadeiras.size(); i++){
            if(this.cadeiras.get(i) != null && this.cadeiras.get(i).getId().equals(id)){
                System.out.println("fail: id ja esta ocupado");
                return false;
           }
        }

        Client client = new Client(id, fone);
        cadeiras.set(idCadeira, client);
        return true;  

    }
    public void cancelar(String id){
        for(int i=0; i<this.cadeiras.size(); i++) {
            if(this.cadeiras.get(i) != null && this.cadeiras.get(i).getId().equals(id)){
                this.cadeiras.set(i, null);
            }
        }
    }
    
    @Override
    public String toString(){
        String saida = "[";
        for(int i = 0; i < this.cadeiras.size(); i++){
            if(this.cadeiras.get(i) == null){
                saida += " - ";
            }else{
                saida += this.cadeiras.get(i).getId();
            }
        }
        saida += "]";
        return saida;
    }
}
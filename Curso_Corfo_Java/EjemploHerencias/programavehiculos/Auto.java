package programavehiculo;

public class Auto extends VehiculoTerrestre{
    private String Patente;
    private int num_puertas, capPersonas;

    public Auto(String Patente, int num_puertas, int capPersonas, int NumeroDeRuedas, String color, String marca, String modelo) {
        super(NumeroDeRuedas, color, marca, modelo);
        this.Patente = Patente;
        this.num_puertas = num_puertas;
        this.capPersonas = capPersonas;
    }

    public String getPatente() {
        return Patente;
    }
    public int getNum_puertas() {
        return num_puertas;
    }
    public int getCapPersonas() {
        return capPersonas;
    }
    
    public void Encender(){
        System.out.println("el auto esta encendido");
    }
    
    

}

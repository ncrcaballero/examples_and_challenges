package programavehiculo;


public class Moto extends VehiculoTerrestre {
    private String Patente;
    private int capPersonas, numRuedas;

    public Moto(String Patente, int capPersonas, int numRuedas, int NumeroDeRuedas, String color, String marca, String modelo) {
        super(NumeroDeRuedas, color, marca, modelo);
        this.Patente = Patente;
        this.capPersonas = capPersonas;
        this.numRuedas = numRuedas;
    }

    public String getPatente() {
        return Patente;
    }
    public int getCapPersonas() {
        return capPersonas;
    }
    public int getNumRuedas() {
        return numRuedas;
    }
    public void Encender(){
        System.out.println("la moto esta encendida");
    }

}

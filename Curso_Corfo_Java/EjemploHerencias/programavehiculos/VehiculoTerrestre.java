package programavehiculo;

public class VehiculoTerrestre extends Vehiculo{
    private int NumeroDeRuedas;

    public VehiculoTerrestre(int NumeroDeRuedas, String color, String marca, String modelo) {
        super(color, marca, modelo);
        this.NumeroDeRuedas = NumeroDeRuedas;
    }

    public void setNumeroDeRuedas(int NumeroDeRuedas) {
        this.NumeroDeRuedas = NumeroDeRuedas;
    }
    
    

}

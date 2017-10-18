package programavehiculo;

public class Bici extends VehiculoTerrestre{
    private String idBicicleta;

    public Bici(String idBicicleta, int NumeroDeRuedas, String color, String marca, String modelo) {
        super(NumeroDeRuedas, color, marca, modelo);
        this.idBicicleta = idBicicleta;
    }

    public String getIdBicicleta() {
        return idBicicleta;
    }
    

}

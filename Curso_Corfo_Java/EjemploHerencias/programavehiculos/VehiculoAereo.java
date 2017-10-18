package programavehiculo;


public class VehiculoAereo extends Vehiculo {
    private String maneradevolar;

    public VehiculoAereo(String maneradevolar, String color, String marca, String modelo) {
        super(color, marca, modelo);
        this.maneradevolar = maneradevolar;
    }
    

}

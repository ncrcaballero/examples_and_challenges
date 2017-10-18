package programavehiculo;


public class VehiculoAcuatico extends Vehiculo{
    private String maneradenadar;

    public VehiculoAcuatico(String maneradenadar, String color, String marca, String modelo) {
        super(color, marca, modelo);
        this.maneradenadar = maneradenadar;
    }
    
    

}

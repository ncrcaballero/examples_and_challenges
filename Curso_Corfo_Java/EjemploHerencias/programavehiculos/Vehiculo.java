package programavehiculo;

public class Vehiculo {
    private String color;
    private String marca;
    private String modelo;

    public Vehiculo(String color, String marca, String modelo) {
        this.color = color;
        this.marca = marca;
        this.modelo = modelo;
    }

    public String getColor() {
        return color;
    }
    public void setColor(String color) {
        this.color = color;
    }
    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    public void acelerar(){
        System.out.println("vehiculo acelerando");     
    }
    public void frenar(){
        System.out.println("vehiculo frenando");        
    }
    public void estacionar(){
        System.out.println("vehiculo estacionar");
    }

}

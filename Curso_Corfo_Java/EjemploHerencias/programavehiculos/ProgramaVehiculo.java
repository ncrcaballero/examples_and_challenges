package programavehiculo;
import javax.swing.JOptionPane;

public class ProgramaVehiculo {
    
    public static void main(String[] args) {
        int x = 0;
        Auto coche1;
        coche1 = new Auto("CX7612", 4, 6, 3, "negro", "toyota", "gurubashi");
        System.out.println("Bienvenido a la carrera de los larrys");
        System.out.println("la patente del coche es: " + coche1.getPatente());
        System.out.println(" ");
        while(x!=9){
            System.out.println(" ");
            x = Integer.parseInt(JOptionPane.showInputDialog("seleccione que desea hacer! 1 para acelerar, 2 para frenar, 3 para estacionarse, 4 para encender el coche, para salir presiona 9"));
            switch(x){
                case 1:
                    coche1.acelerar();
                    break;
                case 2:
                    coche1.frenar();
                    break;
                case 3:
                    coche1.estacionar();
                    break;
                case 4:
                    coche1.Encender();
                    
                    
            }
        }
        
        

    }

}

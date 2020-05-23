//******************************************************
//**** PROJETO FINAL - Conexão Com o Banco de Dados ****
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M3LPBD
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Vinicius de Lima Veiga
//******************************************************
package sistemadecadastro;

//Importação das Classes necessárias para o Banco de dados 
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import javax.swing.JOptionPane;

public class ConexaoMySQL {

    private static ConexaoMySQL instance = null;
    private Connection connection = null;

    private ConexaoMySQL() {
        try {

            String driverName = "com.mysql.jdbc.Driver";
            Class.forName(driverName);

            String serverName = "127.0.0.1";

            //Entrada com o nome do banco de dados
            String dbName = "Cadastro";
            String url = "jdbc:mysql://"
                    + serverName + "/"
                    + dbName;

            //Acesso ao banco de dados
            String username = "root";
            String password = "";

            connection = DriverManager.getConnection(url,
                    username, password);

            if (connection != null) {
                JOptionPane.showMessageDialog(null, "Conectado com sucesso!");
                System.out.println("Conectado com Sucesso!");
            } else {
                System.out.println("Não foi possivel se conectar");
                JOptionPane.showMessageDialog(null, "Não foi possível se conectar!");
            }
            connection.setAutoCommit(true);
        } catch (ClassNotFoundException e) {

            System.out.println("O driver expecificado"
                    + " nao foi encontrado.");
        } catch (SQLException e) {

            System.out.println("Nao foi possivel"
                    + " conectar ao Banco de Dados.");
            JOptionPane.showMessageDialog(null, "Não foi possível se conectar ao Banco de Dados!");
            e.printStackTrace();
        }
    }

    public static ConexaoMySQL getInstance() {
        if (instance == null) {
            instance = new ConexaoMySQL();
        }
        return instance;
    }

    public java.sql.Connection getConnection() {
        return connection;
    }

}

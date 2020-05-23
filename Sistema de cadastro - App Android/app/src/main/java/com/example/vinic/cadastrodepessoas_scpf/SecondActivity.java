
//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M4DADM
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Vinícius de Lima Veiga
//******************************************************

package com.example.vinic.cadastrodepessoas_scpf;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import java.util.List;

//Segunda activity

public class SecondActivity extends AppCompatActivity {

    //Declaração
    Button btVoltar;
    private DBHelper dh;
    EditText etnome, etcpf, etidade, ettelef, etemail;
    Button btOK, btListar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second);

        //Instanciando
        this.dh = new DBHelper(this);

        etnome = (EditText) findViewById(R.id.etnome);
        etcpf = (EditText) findViewById(R.id.etcpf);
        etidade = (EditText) findViewById(R.id.etidade);
        ettelef = (EditText) findViewById(R.id.ettelefone);
        etemail = (EditText) findViewById(R.id.etemail);
        btVoltar = (Button) findViewById(R.id.btVoltar);
        btListar = (Button) findViewById(R.id.btListar);
        btOK = (Button) findViewById(R.id.btOK);

        //Metodo para inserir no Banco de dados
        btOK.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (etnome.getText().length() > 0 && etcpf.getText().length() > 0 && etidade.getText().length() > 0 && ettelef.getText().length() > 0 && etemail.getText().length() > 0) {
                    dh.insert(etnome.getText().toString(), etcpf.getText().toString(), etidade.getText().toString(), ettelef.getText().toString(), etemail.getText().toString());
                    AlertDialog.Builder adb = new AlertDialog.Builder(SecondActivity.this);
                    adb.setTitle("Sucesso!");
                    adb.setMessage("Cadastro de Pessoa Física Realizado");
                    adb.show();

                    //Limpando os campos
                    etnome.setText("");
                    etcpf.setText("");
                    etidade.setText("");
                    ettelef.setText("");
                    etemail.setText("");

                } else {

                    //Caso algum campo não seja preeenchido o usuario recebera uma mensagem de alerta
                    AlertDialog.Builder adb = new AlertDialog.Builder(SecondActivity.this);
                    adb.setTitle("Erro!");
                    adb.setMessage("Todos os campos devem ser preenchidos");
                    adb.show();

                    /*
                    //Limpando os campos
                    etnome.setText("");
                    etcpf.setText("");
                    etidade.setText("");
                    ettelef.setText("");
                    etemail.setText("");
                     */
                }
            }
        });

        //Metodo responsavel em Listar os registros no banco

        btListar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                List<Cadastro> cadastros = dh.queryGetAll();
                if (cadastros == null) {
                    AlertDialog.Builder adb = new AlertDialog.Builder(SecondActivity.this);
                    adb.setTitle("ERRO!");
                    adb.setMessage("Não há cadastros no registro");
                    adb.show();

                    return;
                }
                for (int i = 0; i < cadastros.size(); i++) {
                    Cadastro cadastro = (Cadastro) cadastros.get(i);
                    AlertDialog.Builder adb = new AlertDialog.Builder(SecondActivity.this);
                    adb.setTitle("Registro: " + i);
                    adb.setMessage("Nome: " + cadastro.getNome() + "\n" +
                            "CPF: " + cadastro.getCPF() + "\n" +
                            "Idade: " + cadastro.getIdade() + "\n" +
                            "Telefone: " + cadastro.getTelefone() + "\n" +
                            "Email: " + cadastro.getEmail());
                    adb.setPositiveButton("OK", new DialogInterface.OnClickListener() {
                        @Override
                        public void onClick(DialogInterface dialog, int which) {
                            dialog.dismiss();
                        }
                    });
                    adb.show();
                }
            }
        });

        //Metodo para voltar para a Primeira Tela

        btVoltar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                voltarParaPrimeiraTela();
            }
        });

    }

    void voltarParaPrimeiraTela() {
        Intent intent = new Intent();
        intent.setClass(SecondActivity.this, MainActivity.class);
        startActivity(intent);
        finish();
    }

    @Override
    public void onBackPressed() {
        super.onBackPressed();
        voltarParaPrimeiraTela();
    }
}

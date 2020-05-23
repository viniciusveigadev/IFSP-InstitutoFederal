
//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M4DADM
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Vinícius de Lima Veiga
//******************************************************

package com.example.vinic.cadastrodepessoas_scpf;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    //Declarando
    Button btInserir;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        //Instanciando o Botão da primeira Activity
        btInserir = (Button) findViewById(R.id.btInserir);
        btInserir.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //Ir de uma activity para outra
                SegundaTela();
            }
        });
    }

    //Chamada da SegundaTela
    void SegundaTela() {
        Intent intent = new Intent();
        intent.setClass(MainActivity.this, SecondActivity.class);
        startActivity(intent);
        finish();
    }
}

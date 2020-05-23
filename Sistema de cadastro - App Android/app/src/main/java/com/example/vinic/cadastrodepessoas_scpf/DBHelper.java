
//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M4DADM
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Vinícius de Lima Veiga
//******************************************************

package com.example.vinic.cadastrodepessoas_scpf;

import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.database.sqlite.SQLiteStatement;

import java.util.ArrayList;
import java.util.List;


public class DBHelper {
    private static final String DATABASE_NAME = "bancodedados.db";
    private static final int DATABASE_VERSION = 1;
    private static final String TABLE_NAME = "contato";

    private Context context;
    private SQLiteDatabase db;

    private SQLiteStatement insertStnt;
    private static final String INSERT = "insert into " + TABLE_NAME + " (Nome, CPF, Idade, Telefone, Email) values (?,?,?,?,?)";

    public DBHelper(Context context) {
        this.context = context;
        OpenHelper openHelper = new OpenHelper(this.context);
        this.db = openHelper.getWritableDatabase();
        this.insertStnt = this.db.compileStatement(INSERT);
    }
    //Inserir dados na tabela

    public long insert(String Nome, String CPF, String Idade, String Telefone, String Email) {
        this.insertStnt.bindString(1, Nome);
        this.insertStnt.bindString(2, CPF);
        this.insertStnt.bindString(3, Idade);
        this.insertStnt.bindString(4, Telefone);
        this.insertStnt.bindString(5, Email);

        return this.insertStnt.executeInsert();
    }

    public void deleteAll() {
        this.db.delete(TABLE_NAME, null, null);
    }

    //Obter informaçoes do Banco de Dados

    public List<Cadastro> queryGetAll() {
        List<Cadastro> list = new ArrayList<Cadastro>();

        try {
            Cursor cursor = this.db.query(TABLE_NAME, new String[]{"Nome", "CPF", "Idade", "Telefone", "Email"}, null, null, null, null, null, null);
            int nregistros = cursor.getCount();

            /*Condição, Se nregistros for diferente de 0 (!=0),
             o método Lista (list) pega os dados inseridos (string) e adiciona (add) em cadastro*/

            if (nregistros != 0) {
                cursor.moveToFirst();
                do {
                    Cadastro cadastro = new Cadastro(cursor.getString(0), cursor.getString(1), cursor.getString(2), cursor.getString(3), cursor.getString(4));
                    list.add(cadastro);

                } while (cursor.moveToNext());

                if (cursor != null && !cursor.isClosed()) {
                    cursor.close();
                    return list;
                }
            } else {
                return null;
            }
        } catch (Exception erro) {
            return null;
        }
        return list;

    }

    //Criação da tabela e definição
    private static class OpenHelper extends SQLiteOpenHelper {
        OpenHelper(Context context) {
            super(context, DATABASE_NAME, null, DATABASE_VERSION);
        }

        public void onCreate(SQLiteDatabase db) {

            String sql = "CREATE TABLE IF NOT EXISTS " + TABLE_NAME + " (id INTEGER PRIMARY KEY AUTOINCREMENT, Nome TEXT, " +
                    "CPF TEXT, Idade TEXT, Telefone TEXT, Email TEXT );";
            db.execSQL(sql);
        }

        public void onCreate(SQLiteDatabase db, int oldVersion, int newVersion) {
            db.execSQL("DROP TABLE IF EXISTS " + TABLE_NAME);
            onCreate(db);
        }

        @Override
        public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
            db.execSQL("DROP TABLE IF EXISTS " + TABLE_NAME);
            onCreate(db);
        }

    }

}
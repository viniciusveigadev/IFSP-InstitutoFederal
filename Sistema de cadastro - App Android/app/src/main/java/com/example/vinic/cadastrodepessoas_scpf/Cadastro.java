
//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M4DADM
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Vinícius de Lima Veiga
//******************************************************

package com.example.vinic.cadastrodepessoas_scpf;

/**
 * Classe Publica para declaração, onde será "pegado" e configurado os dados (set text e get text)
 */
public class Cadastro {

    Cadastro(String Nome, String CPF, String Idade, String Telefone, String Email) {
        this.Nome = Nome;
        this.CPF = CPF;
        this.Idade = Idade;
        this.Telefone = Telefone;
        this.Email = Email;
    }

    public String getNome() {
        return Nome;
    }

    public void setNome(String nome) {
        Nome = nome;
    }

    private String Nome;

    public String getCPF() {
        return CPF;
    }

    public void setCPF(String CPF) {
        this.CPF = CPF;
    }

    private String CPF;

    public String getIdade() {
        return Idade;
    }

    public void setIdade(String idade) {
        Idade = idade;
    }

    private String Idade;

    public String getTelefone() {
        return Telefone;
    }

    public void setTelefone(String telefone) {
        Telefone = telefone;
    }

    private String Telefone;

    public String getEmail() {
        return Email;
    }

    public void setEmail(String email) {
        Email = email;
    }

    private String Email;

}

#include "catalogos.h"
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;

#include <fstream>
using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>
using std::setw;
using std::setprecision;
#include <cstdlib>

int opcionEmp();
void imprimirRegistroca( fstream& );
void crearArchivoCreditoca();
void mostrarLineaca ostream&, const Datoscatalogos & );
void nuevoRegistroca( fstream& , fstream&, fstream&);
int obtenernCodigoca( const char * const );
void modificarRegistroca( fstream& );
void eliminarRegistroca( fstream& );
void consultarRegistroca( fstream& );
void mostrarLineaPantallaca( const Datoscatalogos &);
int obtenernCodigoImp( const char * );
int obtenernCodigoCon( const char * );

using namespace std;
catalogos::catalogos()
{
    fstream creditoEntradaSalida( "cat.dat", ios::in | ios::out | ios::binary);
    if ( !creditoEntradaSalida ) {
        cerr << "No se pudo abrir el archivo." << endl;
        crearArchivoCreditoEmp();
        cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo\n";
        exit ( 1 );
    }

    fstream creditoEntradaSalida22( "usuario.dat", ios::in | ios::out | ios::binary);

    enum Opciones { agregar = 1, nuevo, modificar, eliminar, mostrar, FIN };
    int opcion;
    while ( ( opcion = opcioncat() ) != FIN ) {
        switch ( opcion ) {
            case agregar:
                imprimirRegistroca( creditoEntradaSalida );
            break;
            case nuevo:
                nuevoRegistroca( creditoEntradaSalida, creditoEntradaSalida22, creditoEntradaSalida23 );
            break;
            case modificar:
                modificarRegistroca( creditoEntradaSalida );
            break;
            case eliminar:
                eliminarRegistroca( creditoEntradaSalida );
            break;
            case mostrar:
                consultarRegistroca( creditoEntradaSalida );
            break;
            default:
            cerr << "Opcion incorrecta" << endl;
            break;

      } //FIN SWITCH

       creditoEntradaSalida.clear();

   } //FIN WHILE
}
int opcionEmp(){
    system("cls");

    cout<<"\n\t\t\t-----------------------------------------------";
    cout<<"\n\t\t\t\t   -------------------"<<endl;
	cout<<"\t\t\t\t      |   CATALOGOS   |"<<endl;
	cout<<"\t\t\t\t     -------------------"<<endl;

    cout<< "\n\n\t\t\t 1. Guardar archivo de texto para Imprimirlo" << endl
        << "\t\t\t 2. Agregar producto" << endl
        << "\t\t\t 3. Modificar precio producto" << endl
        << "\t\t\t 4. Eliminar producto" << endl
        << "\t\t\t 5. Mostrar Lista de productos" << endl
        << "\t\t\t 6. Regresar al Menu Principal" << endl
        <<"\n\t\t\t-----------------------------------------------"<<endl
        << "\n\t\t\tIngrese su opcion: ";
    int opcionMenu ;

    cin >> opcionMenu;

   return opcionMenu;
}
void imprimirRegistroca( fstream &leerDeArchivo )
{
    ofstream archivoImprimirSalida( "ImprimirCatalogo.txt", ios::out );
    if ( !archivoImprimirSalida ) {
        cerr << "No se pudo crear el archivo." << endl;
        exit( 1 );

    } //FIN DE INSTRUCCION if

    archivoImprimirSalida << left << setw( 14 ) << "Codigo" << setw( 16 )<< "nombre producto" << setw( 16 ) << "precio" << << endl;
    leerDeArchivo.seekg( 0 );

    Datoscatalogos catalogos;
    leerDeArchivo.read( reinterpret_cast< char * >( &catalogos ), sizeof( Datoscatalogos ) );

    while ( !leerDeArchivo.eof() ) {
        if ( cata`.obtenerCodigo() != 0 )
        mostrarLineaca( archivoImprimirSalida, catalogos );
        leerDeArchivo.read( reinterpret_cast< char * >( &catalogos ), sizeof( Datoscatalogos ) );
    } //FIN DE WHILE
    cout<<"\n";
    system("pause");
} //FIN DE LA FUNCION -IMPRIMIR REGISTRO-
void mostrarLineaca( ostream &salida, const Datoscatalogos &registro )
{
   salida << left << setw( 18 ) << registro.obtenerCodigo()
          << setw( 16 ) << registro.obtenernombreproducto().data()
          << setw( 15 ) << registro.obtenerprecio()


}//FIN -MOSTRARLINEA-
void crearArchivoCreditoca()
{
    ofstream creditoSalida( "cat.dat", ios::out | ios::binary );
    if ( !creditoSalida ) {
      cerr << "No se pudo abrir el archivo." << endl;
      exit( 1 );
    }
    Datoscat empleadoEnBlanco;
    for ( int i = 0; i < 100; i++ )
        creditoSalida.write(reinterpret_cast< const char * >( &catalogosEnBlanco ), sizeof( Datoscatalogos ) );
    cout<<"\n";
    system("pause");
}
void nuevoRegistrocat( fstream &insertarEnArchivo, fstream &leerDeArchivoC, fstream &LeerImp)
{
    int codigo = obtenernCodigocat( "\nEscriba el Codigo del catalogo " );
    insertarEnArchivo.seekg( ( codigo - 1 ) * sizeof( Datoscatalogo ) );
    DatosEmpleado catalogos;
    insertarEnArchivo.read( reinterpret_cast< char * >( &catalogos ), sizeof( Datoscatalogos ) );


    if ( empleados.obtenerCodigo() == 0 ) {
        char nombreproducto[ 15 ];
        double precio;



} //FIN -MOSTRARLINEAENOANTALLA-


catalogos::~catalogos()
{
    //dtor
}

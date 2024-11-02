#include <iostream>
#include "TicketBooking.h"

int main() {
    TicketBooking ticketBooking;

    // Menambahkan detail film yang tersedia
    ticketBooking.addMovie("Avengers: Endgame", "2023-06-21", "Monday", { "Room 1", "Room 2" }, 50, 100, 40, 80, { "10:00", "14:00", "18:00" });
    ticketBooking.addMovie("The Lion King", "2023-06-22", "Tuesday", { "Room 3", "Room 4" }, 40, 80, 30, 60, { "11:00", "15:00", "19:00" });
    ticketBooking.addMovie("Joker", "2023-06-23", "Wednesday", { "Room 5", "Room 6" }, 45, 90, 35, 70, { "12:00", "16:00", "20:00" });
    ticketBooking.addMovie("Spider-Man: Far From Home", "2023-06-24", "Thursday", { "Room 7", "Room 8" }, 48, 95, 38, 76, { "13:00", "17:00", "21:00" });
    ticketBooking.addMovie("Wonder Woman 1984", "2023-06-25", "Friday", { "Room 9", "Room 10" }, 42, 85, 33, 66, { "14:00", "18:00", "22:00" });

    int choice;
    int movieIndex;
    int roomIndex;
    int timeIndex;
    int quantity;
    bool isVIP;

    while (true) {
        std::cout << "===================================================" << std::endl;
        std::cout << "           TIKET BIOSKOP BY KEL 7 CINEMA           " << std::endl;
        std::cout << "===================================================" << std::endl;
        std::cout << "1. Tampilkan Film" << std::endl;
        std::cout << "2. Beli Tiket" << std::endl;
        std::cout << "3. Tampilkan Tiket yang telah di-Beli" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "===============================" << std::endl;
        std::cout << "Masukkan Pilihan: ";
        std::cin >> choice;

        switch (choice) {
            case 0:
                std::cout << "Terima kasih telah menggunakan aplikasi kami!" << std::endl;
                return 0;

            case 1:
                ticketBooking.displayMovies();
                break;

            case 2:
                ticketBooking.displayMovies();

                std::cout << "Pilih film yang ingin ditonton: ";
                std::cin >> movieIndex;

                std::cout << "Pilih ruangan: ";
                std::cin >> roomIndex;

                std::cout << "Pilih jam tayang film-nya: ";
                std::cin >> timeIndex;

                std::cout << "Pilih jumlah film-nya: ";
                std::cin >> quantity;

                std::cout << "Apakah anda berminat untuk membeli tiket VIP (1 untuk ya, 0 untuk tidak): ";
                std::cin >> isVIP;

                ticketBooking.bookTicket(movieIndex, roomIndex, timeIndex, quantity, isVIP);
                break;

            case 3:
                ticketBooking.displayTickets();
                break;

            default:
                std::cout << "Pilihan tidak tersedia, silahkan coba lagi." << std::endl;
                break;
        }
    }

    return 0;
}

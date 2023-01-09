// exemplo
forward MSG_NeedToBeOnfootCommand(playerid);
public MSG_NeedToBeOnfootCommand(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Você precisa estar a pé para usar esse comando!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "You need to be on foot to use this command!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡Tienes que estar a pie para usar este comando!");
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof(str), "Kailangan mong maglakad upang magamit ang command na ito!");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
// msgs automaticas:
new portugueseAutomsgs[][] = {
    {"[8GS] Nosso servidor tem custos para se manter online, ajude no desenvolvimento e na estabilidade do servidor! Doe! /shop"},
    {"[8GS] Curta nossa página no facebook e fique por dentro de promoções que só acontacem por lá! www.facebook.com/intenselife8gs"},
    {"[8GS] Entre no nosso Discord! Canal oficial de comunicação por voz! (/discord)"},
    {"[8GS] Inscreva-se no nosso canal oficial do YouTube: https://goo.gl/cJaTPX"},
    {"[8GS] Acesse e se registre em nosso forum é o lugar mais importante do Server lá tem tudo sobre o servidor: /forum"}
};
new englishAutomsgs[][] = {
     {"[8GS] Our server has costs to stay online, help with server development and stability! Donate! /shop"},
     {"[8GS] Like our page on facebook and stay on top of promotions that only happen there! www.facebook.com/intenselife8gs"},
     {"[8GS] Join our Discord! Official voice communication channel! (/discord)"},
     {"[8GS] Subscribe to our official YouTube channel: https://goo.gl/cJaTPX"},
     {"[8GS] Access and register on our forum is the most important place on the Server there is everything about the server: /forum"}
};
new spanishAutomsgs[][] = {
     {"[8GS] Nuestro servidor tiene costos para mantenerse en línea, ayuda en el desarrollo y estabilidad del servidor! ¡Donar! /shop"},
     {"[8GS] Dale me gusta a nuestra página en Facebook y mantente al tanto de las promociones que solo ocurren allá. www.facebook.com/intenselife8gs"},
     {"[8GS] ¡Únase a nuestra discordia! ¡Canal oficial de comunicación de voz! (/discord)"},
     {"[8GS] Suscríbete a nuestro canal oficial de YouTube: https://goo.gl/cJaTPX"},
     {"[8GS] Acceda y regístrese en nuestro foro es el lugar más importante en el servidor hay todo sobre el servidor: /foro"}
};
new filipinoAutomsgs[][] = {
     {"[8GS] Ang aming server ay gumagastos upang mapanatiling online, maaring mag donate upang makatulong sa pag-unlad at katatagan ng server! /shop"},
     {"[8GS] Mag-like at mag follow sa aming facebook page at manatiling nakatuktok sa mga promosyon na doon lamang nakikita! www.facebook.com/intenselife8gs"},
     {"[8GS] Sumali sa aming Discord! Official voice communication channel! (/discord)"},
     {"[8GS] Mag-Subscribe sa aming opisyal na YouTube channel: https://goo.gl/cJaTPX"},
     {"[8GS] I-acess at mag-register sa aming forum upang makita ang pinakamahalagang bagay tungkol Server:: /forum"}
};

stock GetJobName(jobid, employeeIdiom) {
    new str[24];
    if(jobid == 1) {
        if(employeeIdiom == 1) str = "Motorista de Ônibus";
        else if(employeeIdiom == 2) str = "Bus Driver";
        else if(employeeIdiom == 3) str = "Conductor del Autobús";
        else if(employeeIdiom == 4) str = "Bus Driver";
    }
    else if(jobid == 2) {
        if(employeeIdiom == 1) str = "Motoboy";
        else if(employeeIdiom == 2) str = "Motoboy";
        else if(employeeIdiom == 3) str = "Motoboy";
        else if(employeeIdiom == 4) str = "Motoboy";
    }
    else if(jobid == 3) {
        if(employeeIdiom == 1) str = "Pescador";
        else if(employeeIdiom == 2) str = "Fisherman";
        else if(employeeIdiom == 3) str = "Pescador";
        else if(employeeIdiom == 4) str = "Fisherman";
    }
    else if(jobid == 4) {
        if(employeeIdiom == 1) str = "Mecânico";
        else if(employeeIdiom == 2) str = "Mechanical";
        else if(employeeIdiom == 3) str = "Mecánico";
        else if(employeeIdiom == 4) str = "Mechanic";
    }
    else if(jobid == 5) {
        if(employeeIdiom == 1) str = "Advogado";
        else if(employeeIdiom == 2) str = "Lawyer";
        else if(employeeIdiom == 3) str = "Abogado";
        else if(employeeIdiom == 4) str = "Lawyer";
    }
    else if(jobid == 6) {
        if(employeeIdiom == 1) str = "Piloto de Avião";
        else if(employeeIdiom == 2) str = "Airplane Pilot";
        else if(employeeIdiom == 3) str = "Piloto de Avión";
        else if(employeeIdiom == 4) str = "Airplane Pilot";
    }
    else if(jobid == 7) {
        if(employeeIdiom == 1) str = "Prostituta";
        else if(employeeIdiom == 2) str = "Prostitute";
        else if(employeeIdiom == 3) str = "Prostituta";
        else if(employeeIdiom == 4) str = "Prostitute";
    }
    else if(jobid == 8) {
        if(employeeIdiom == 1) str = "Detetive";
        else if(employeeIdiom == 2) str = "Detective";
        else if(employeeIdiom == 3) str = "Detective";
        else if(employeeIdiom == 4) str = "Detective";
    }
    else if(jobid == 9) {
        if(employeeIdiom == 1) str = "Maquinista";
        else if(employeeIdiom == 2) str = "Train Driver";
        else if(employeeIdiom == 3) str = "Conductor de Tren";
        else if(employeeIdiom == 4) str = "Train Driver";
    }
    else if(jobid == 10) {
        if(employeeIdiom == 1) str = "Caminhoneiro";
        else if(employeeIdiom == 2) str = "Truck Driver";
        else if(employeeIdiom == 3) str = "conductor de Camión";
        else if(employeeIdiom == 4) str = "Truck Driver";
    }
    else if(jobid == 11) {
        if(employeeIdiom == 1) str = "Minerador";
        else if(employeeIdiom == 2) str = "Miner";
        else if(employeeIdiom == 3) str = "Minero";
        else if(employeeIdiom == 4) str = "Miner";
    }
    else if(jobid == 12) {
        if(employeeIdiom == 1) str = "Pirata";
        else if(employeeIdiom == 2) str = "Pirate";
        else if(employeeIdiom == 3) str = "Pirata";
        else if(employeeIdiom == 4) str = "Pirate";
    }
    else if(jobid == 13) {
        if(employeeIdiom == 1) str = "Lenhador";
        else if(employeeIdiom == 2) str = "Lumberjack";
        else if(employeeIdiom == 3) str = "Leñador";
        else if(employeeIdiom == 4) str = "Lumberjack";
    }
    else if(jobid == 14) {
        if(employeeIdiom == 1) str = "Ladrão de Veículos";
        else if(employeeIdiom == 2) str = "Vehicle Thief";
        else if(employeeIdiom == 3) str = "Ladrón de Vehículos";
        else if(employeeIdiom == 4) str = "Vehicle Thief";
    }
    else if(jobid == 15) {
        if(employeeIdiom == 1) str = "Fabricante de Armas";
        else if(employeeIdiom == 2) str = "Weapons Manufacturer";
        else if(employeeIdiom == 3) str = "Fabricante de Armas";
        else if(employeeIdiom == 4) str = "Weapon Dealer";
    }
    // CaÃ¯Â¿Â½ador (https://www.youtube.com/watch?v=Wqom-mD9zhk)
    return str;
}
stock GetItemName(imodel, itype, idioma) {
    new str[64];
    // armas
    if(imodel == 1) {
        if(idioma == 1) str = "Soco Inglás";
        else if(idioma == 2) str = "Brass Knuckles";
        else if(idioma == 3) str = "Brass Knuckles";
        else if(idioma == 4) str = "Brass Knuckles";
    }
    else if(imodel == 2) {
        if(idioma == 1) str = "Taco de Golfe";
        else if(idioma == 2) str = "Golf Club";
        else if(idioma == 3) str = "Palo de Golf";
        else if(idioma == 4) str = "Golf Club";
    }
    else if(imodel == 3) {
        if(idioma == 1) str = "Cacetete";
        else if(idioma == 2) str = "Nightstick";
        else if(idioma == 3) str = "Bastón de Policía";
        else if(idioma == 4) str = "Nightstick";
    }
    else if(imodel == 4) {
        if(idioma == 1) str = "Faca";
        else if(idioma == 2) str = "Knife";
        else if(idioma == 3) str = "Cuchillo";
        else if(idioma == 4) str = "Knife";
    }
    else if(imodel == 5) {
        if(idioma == 1) str = "Taco de Baseball";
        else if(idioma == 2) str = "Baseball Bat";
        else if(idioma == 3) str = "Bate de Bï¿½isbol";
        else if(idioma == 4) str = "Baseball Bat";
    }
    else if(imodel == 6) {
        if(idioma == 1) str = "Pá";
        else if(idioma == 2) str = "Shovel";
        else if(idioma == 3) str = "Pala";
        else if(idioma == 4) str = "Shovel";
    }
    else if(imodel == 7) {
        if(idioma == 1) str = "Taco de Sinuca";
        else if(idioma == 2) str = "Pool Cue";
        else if(idioma == 3) str = "Taco de Billar";
        else if(idioma == 4) str = "Pool Cue";
    }
    else if(imodel == 8) str = "Katana";
    else if(imodel == 9) {
        if(idioma == 1) str = "Motoserra";
        else if(idioma == 2) str = "Chainsaw";
        else if(idioma == 3) str = "Motosierra";
        else if(idioma == 4) str = "Chainsaw";
    }
    else if(imodel == 10) {
        if(idioma == 1) str = "Dildo Roxo";
        else if(idioma == 2) str = "Purple Dildo";
        else if(idioma == 3) str = "Consolador Morado";
        else if(idioma == 4) str = "Kulay Lilang Dildo";
    }
    else if(imodel == 11) {
        if(idioma == 1) str = "Dildo";
        else if(idioma == 2) str = "Dildo";
        else if(idioma == 3) str = "Consolador";
        else if(idioma == 4) str = "Dildo";
    }
    else if(imodel == 12) {
        if(idioma == 1) str = "Vibrador";
        else if(idioma == 2) str = "Vibrator";
        else if(idioma == 3) str = "Vibrador";
        else if(idioma == 4) str = "Vibrator";
    }
    else if(imodel == 13) {
        if(idioma == 1) str = "Vibrador Prata";
        else if(idioma == 2) str = "Silver Vibrator";
        else if(idioma == 3) str = "Vibrador Plata";
        else if(idioma == 4) str = "Silver Vibrator";
    }
    else if(imodel == 14) {
        if(idioma == 1) str = "Flores";
        else if(idioma == 2) str = "Flowers";
        else if(idioma == 3) str = "Flores";
        else if(idioma == 4) str = "Bulaklak";
    }
    else if(imodel == 15) {
        if(idioma == 1) str = "Vara de Pesca";
        else if(idioma == 2) str = "Fishing Rod";
        else if(idioma == 3) str = "Caça de Pescar";
        else if(idioma == 4) str = "Fishing Rod";
    }
    else if(imodel == 16) {
        if(idioma == 1) str = "Granada";
        else if(idioma == 2) str = "Grenade";
        else if(idioma == 3) str = "Granada";
        else if(idioma == 4) str = "Granada";
    }
    else if(imodel == 17) {
        if(itype == 1)      {   str = "Smoke Grenade";    }
        else if(itype == 2) {   str = "Flashbang"; }
        else if(itype == 3) {
            if(idioma == 1) str = "Gás Lacrimogêneo";
            else if(idioma == 2) str = "Tear Gas";
            else if(idioma == 3) str = "Gás Lacrimógeno";
            else if(idioma == 4) str = "Tear Gas";
        }
    }
    else if(imodel == 18) {
        if(idioma == 1) str = "Coquetel Molotov";
        else if(idioma == 2) str = "Molotov Cocktail";
        else if(idioma == 3) str = "Coctel Molotov";
        else if(idioma == 4) str = "Molotov Cocktail";
    }
    else if(imodel == 22) {
        if(idioma == 1) str = "Sinalizador";
        else if(idioma == 2) str = "Flare Gun";
        else if(idioma == 3) str = "Pistola de Bengalas";
        else if(idioma == 4) str = "Flare Gun";
    }
    else if(imodel == 23) str = "Tazer";
    else if(imodel == 24) {
        if(itype == 1) str = "Colt M1911"; //.45
        else if(itype == 2) str = "Makarov IJ70"; //.45
        else if(itype == 3) str = "SIG P220"; //.45
        else if(itype == 4) str = "Jericho 941"; //.45
        else if(itype == 5) str = "Ruger SR1911"; //.45
    }
    else if(imodel == 29) {
        if(itype == 1) str = "MAS-38"; //.9mm
        else if(itype == 2) str = "Beretta M12"; //.9mm
        else if(itype == 3) str = "HK MP5"; //.9mm
        else if(itype == 4) str = "HK UMP"; //.9mm
        else if(itype == 5) str = "Vityaz-SN"; //.9mm
    }
    else if(imodel == 25) {
        if(itype == 1) str = "Winchester 1897"; //.12mm
        else if(itype == 2) str = "Winchester 1912"; //.12mm
        else if(itype == 3) str = "MP-133"; //.12mm
        else if(itype == 4) str = "Benelli Nova"; //.12mm
        else if(itype == 5) str = "Remington 887"; //.12mm
    }
    else if(imodel == 27) {
        if(itype == 1) str = "Franchi SPAS-12"; //.12mm NITRO
        else if(itype == 2) str = "RMB-93"; //.12mm NITRO
        else if(itype == 3) str = "SAIGA-20"; //.12mm NITRO
        else if(itype == 4) str = "SAIGA-420"; //.12mm NITRO
        else if(itype == 5) str = "TOZ-194"; //.12mm NITRO
    }
    else if(imodel == 30) {
        if(itype == 1) str = "AK-47"; //.762mm
        else if(itype == 2) str = "AK-74"; //.762mm
        else if(itype == 3) str = "AK-104"; //.762mm
        else if(itype == 4) str = "AK-204"; //.762mm
        else if(itype == 5) str = "AK-15K"; //.762mm
    }
    else if(imodel == 31) {
        if(itype == 1) str = "M16"; //.556mm
        else if(itype == 2) str = "SG 550"; //.556mm
        else if(itype == 3) str = "M4"; //.556mm
        else if(itype == 4) str = "Barret REC7"; //.556mm
        else if(itype == 5) str = "Colt CK901"; //.556mm
    }
    else if(imodel == 33) {
        if(itype == 1) str = "M10"; //.30mm
        else if(itype == 2) str = "Benelli R1"; //.30mm
        else if(itype == 3) str = "Saiga 308"; //.30mm
        else if(itype == 4) str = "Rossi 92"; //.30mm
        else if(itype == 5) str = "Winchester 44"; //.30mm
    }
    else if(imodel == 34) {
        if(itype == 1) str = "Barrett M82"; //.50mm
        else if(itype == 2) str = "PGM Hecate II"; //.50mm
        else if(itype == 3) str = "Steyr HS"; //.50mm
        else if(itype == 4) str = "Barrett M99"; //.50mm
        else if(itype == 5) str = "M82A1"; //.50mm
    }
    else if(imodel == 35) str = "RPG-7D3"; 
    else if(imodel == 36) str = "FIM-92 Stinger";
    else if(imodel == 37) {
        if(idioma == 1) str = "Lanï¿½a-chamas";
        else if(idioma == 2) str = "Flamethrower";
        else if(idioma == 3) str = "Echador de llama";
        else if(idioma == 4) str = "Flamethrower";
    }
    else if(imodel == 38) str = "Minigun";
    else if(imodel == 42) {
        if(idioma == 1) format(str, sizeof(str), "Extintor de Incendio (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Fire Extinguisher (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Extintor de Incendios (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Fire Extinguisher (%i)", itype );
        
    }
    else if(imodel == 43) str = "Camera";
    //
    else if(imodel == 55) { // comida
        if(itype == 1) {
            if(idioma == 1) str = "Laranja";
            else if(idioma == 2) str = "Orange";
            else if(idioma == 3) str = "Naranja";
            else if(idioma == 4) str = "Orange";
        }
        else if(itype == 2) str = "Banana";
        else if(itype == 3) str = "Pizza";
        else if(itype == 4) str = "Taco";
        else if(itype == 5) str = "Burguer";
    }
    else if(imodel == 56) { // bebida
        if(itype == 1) {
            if(idioma == 1) str = "Agua";
            else if(idioma == 2) str = "Water";
            else if(idioma == 3) str = "Agua";
            else if(idioma == 4) str = "Tubig";
        }
        else if(itype == 2) str = "Absinto";
        else if(itype == 3) str = "Bacardi";
        else if(itype == 4) str = "Vodka";
        else if(itype == 5) str = "Everclear";
        else if(itype == 6) str = "Moonshine";
    }
    else if(imodel == 57) {
        if(idioma == 1) format(str, sizeof(str), "Galáo de Gasolina (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Jerrycan (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Gallo de Gasolina (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Galon ng Gasolina (%i)", itype );
    }
    else if(imodel == 58) { // medicamentos
        if(itype == 1) // tira a tela tremendo, acontece quando voce ta com mt dor, tipo levou um tiro ouc aiu de um lugar alto
        {
            if(idioma == 1) str = "Pilulas de DST";
            else if(idioma == 2) str = "STD Pillows";
            else if(idioma == 3) str = "Pilas de ETS";
            else if(idioma == 4) str = "Pills para sa STD";
        }
        else if(itype == 2) // cura perna quebrada
        {
            if(idioma == 1) str = "Morfina";
            else if(idioma == 2) str = "Morphine";
            else if(idioma == 3) str = "Morfina";
            else if(idioma == 4) str = "Morphine";
        }
        else if(itype == 3) // curar amigo
        {
            if(idioma == 1) str = "Bolsa de Sangue";
            else if(idioma == 2) str = "Bloodbag";
            else if(idioma == 3) str = "Bolsa de Sangre";
            else if(idioma == 4) str = "Bloodbag";
        }
        else if(itype == 4) // cura sangramento
        {
            if(idioma == 1) str = "Bandagem";
            else if(idioma == 2) str = "Bandage";
            else if(idioma == 3) str = "Vendaje";
            else if(idioma == 4) str = "Bendahe";
        }
        else if(itype == 5) str = "Medkit"; // auto cura
    }
    else if(imodel == 59) { // mochilas
        if(itype == 1) {
            if(idioma == 1) str = "Bolsa";
            else if(idioma == 2) str = "Bag";
            else if(idioma == 3) str = "Bolso";
            else if(idioma == 4) str = "Bag";
        }
        else if(itype == 2) {       
            if(idioma == 1) str = "Mochila de Caça";
            else if(idioma == 2) str = "Hunting Backpack";
            else if(idioma == 3) str = "Mochila de Caza";
            else if(idioma == 4) str = "Hunting Backpack";
        }
        else if(itype == 3) {
            if(idioma == 1) str = "Mochila Assalto";
            else if(idioma == 2) str = "Assault Backpack";
            else if(idioma == 3) str = "Mochila de Asalto";
            else if(idioma == 4) str = "Assault Backpack";
        }
        else if(itype == 4) {
            if(idioma == 1) str = "Mochila de Montanha";
            else if(idioma == 2) str = "Mountain Backpack";
            else if(idioma == 3) str = "Mochila de Montaï¿½a";
            else if(idioma == 4) str = "Mountain Backpack";
        }
        else if(itype == 5) {
            if(idioma == 1) str = "Mochila Coyote";
            else if(idioma == 2) str = "Coyote Backpack";
            else if(idioma == 3) str = "Mochila Coyote";
            else if(idioma == 4) str = "Cayote Backpack";
        }
    }
    // 
    else if(imodel == 60) { format(str, sizeof(str), "Material (%i)", itype ); }
    else if(imodel == 61) { str = "Small Material Box"; }
    else if(imodel == 62) { str = "Medium Material Box"; }
    else if(imodel == 63) { str = "Big Material Box"; } // armazem faction
    else if(imodel == 64) { str = "Transport Bag"; }
    // 70 ao 300 moveis
    else if(imodel == 70) {
        if(idioma == 1) str = "Mï¿½quina de Lavar";
        else if(idioma == 2) str = "Washing Machine";
        else if(idioma == 3) str = "Lavadora";
        else if(idioma == 4) str = "Washing Machine";
    }
    else if(imodel == 71) {
        if(idioma == 1) str = "Grelha de Churrasco";
        else if(idioma == 2) str = "Barbecue Grill";
        else if(idioma == 3) str = "Rejilla de Barbacoa";
        else if(idioma == 4) str = "Barbecue Grill";
    }
    else if(imodel == 72) {
        if(idioma == 1) str = "Computador";
        else if(idioma == 2) str = "Computer";
        else if(idioma == 3) str = "Computadora";
        else if(idioma == 4) str = "Computer";
    }
    else if(imodel == 73) {
        if(idioma == 1) str = "Ventilador";
        else if(idioma == 2) str = "Fan";
        else if(idioma == 3) str = "Ventilador";
        else if(idioma == 4) str = "Bentilador";
    }
    else if(imodel == 74) {
        if(idioma == 1) str = "Impressora";
        else if(idioma == 2) str = "Printer";
        else if(idioma == 3) str = "Impresora";
        else if(idioma == 4) str = "Printer";
    }
    else if(imodel == 75) {
        if(idioma == 1) str = "Gravador";
        else if(idioma == 2) str = "Recorder";
        else if(idioma == 3) str = "Grabadora";
        else if(idioma == 4) str = "Recorder";
    }
    else if(imodel == 76) { str = "VCR"; }
    else if(imodel == 77) { str = "DVD"; }
    else if(imodel == 78) {
        if(idioma == 1) str = "Alto Falante";
        else if(idioma == 2) str = "Speaker";
        else if(idioma == 3) str = "Altavoz";
        else if(idioma == 4) str = "Speaker";
    }
    else if(imodel == 79) { str = "Radio"; }
    else if(imodel == 80) { str = "TV"; }
    else if(imodel == 81) { str = "Video Game"; }
    // drogas
    else if(imodel == 301) {
        if(idioma == 1) format(str, sizeof(str), "Maconha (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Marijuana (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Marijuana (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Chongke (%i)", itype );
    }
    else if(imodel == 302) {
        if(idioma == 1) format(str, sizeof(str), "Cocaína (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Cocaine (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Cocaína (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Cocaine (%i)", itype );
    }
    else if(imodel == 303) { format(str, sizeof(str), "Crack (%i)", itype ); }
    // 304-309
    else if(imodel == 310) {
        if(idioma == 1) format(str, sizeof(str), "Sementes de Maconha (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Marijuana Seeds (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Semillas de Marihuana (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Buto ng Chongke (%i)", itype );
    }
    else if(imodel == 311) {
        if(idioma == 1) format(str, sizeof(str), "Sementes de Cocaína (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Cocaine Seeds (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Semillas de Cocaína (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Buto ng Cocaine (%i)", itype );
    }
    else if(imodel == 312) {
        if(idioma == 1) format(str, sizeof(str), "Pasta de Cocaína (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Cocaine Paste (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Pasta de Cocaína (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Cocaine Paste (%i)", itype );
    }
    // 313-319
    // muniï¿½ï¿½o
    else if(imodel == 320) { format(str, sizeof(str), ".45mm (%i)", itype );        }
    else if(imodel == 321) { format(str, sizeof(str), ".9mm (%i)", itype );         }
    else if(imodel == 322) { format(str, sizeof(str), ".12mm (%i)", itype );        }
    else if(imodel == 323) { format(str, sizeof(str), ".12mm NITRO (%i)", itype );  }
    else if(imodel == 324) { format(str, sizeof(str), ".556mm (%i)", itype );       }
    else if(imodel == 325) { format(str, sizeof(str), ".762mm (%i)", itype );       }
    else if(imodel == 326) { format(str, sizeof(str), ".30mm (%i)", itype );        }
    else if(imodel == 327) { format(str, sizeof(str), ".50mm (%i)", itype );        }
    // 328 gasolina, pulei (57)
    else if(imodel == 329) { format(str, sizeof(str), "RPG AMMO (%i)", itype );      }
    else if(imodel == 330) { format(str, sizeof(str), "HSROCKET AMMO (%i)", itype ); }
    else if(imodel == 331) { format(str, sizeof(str), "Minigun AMMO (%i)", itype );  }
    // 328-399
    // peixes 400-405
    else if(imodel == 400) {
        if(idioma == 1) format(str, sizeof(str), "Iscas (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Baits (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Cebos (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Baits (%i)", itype );
    }
    else if(imodel == 401) {
        if(idioma == 1) format(str, sizeof(str), "Sardinha (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Sardine (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Sardina (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Sardinas (%i)", itype );
    }
    else if(imodel == 402) {
        if(idioma == 1) format(str, sizeof(str), "Truta (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Trout (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Trucha (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Trout (%i)", itype );
    }
    else if(imodel == 403) {
        if(idioma == 1) format(str, sizeof(str), "Salmão (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Salmon (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Salmón (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Salmon (%i)", itype );
    }
    else if(imodel == 404) {
        if(idioma == 1) format(str, sizeof(str), "Atum (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Tuna (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Atum (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Tuna (%i)", itype );
    }
    else if(imodel == 405) {
        if(idioma == 1) format(str, sizeof(str), "Peixe Espada (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Sword Fish (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Pez Espada (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Isdang Ispada (%i)", itype );
    }
    else if(imodel == 406) {
        if(idioma == 1) str = "Roupa Anti Estupro";
        else if(idioma == 2) str = "Anti Rape Clothing";
        else if(idioma == 3) str = "Ropa Anti-Violacón";
        else if(idioma == 4) str = "Anti Rape na Damit";
        
    }
    else if(imodel == 407) {
        if(idioma == 1) str = "Corda";
        else if(idioma == 2) str = "Rope";
        else if(idioma == 3) str = "Cuerda";
        else if(idioma == 4) str = "Lubid";
    }
    else if(imodel == 408) { str = "C4"; }
    else if(imodel == 409) {
        if(idioma == 1) str = "Granada de Gás Lacrimogêneo";
        else if(idioma == 2) str = "Tear Gas Grenade";
        else if(idioma == 3) str = "Granada de gas Lacrimï¿½geno";
        else if(idioma == 4) str = "Tear Gas na Granada;
    }
    else if(imodel == 410) {
        if(idioma == 1) format(str, sizeof(str), "Bizz Products (%i)", itype );
        else if(idioma == 2) format(str, sizeof(str), "Bizz Products (%i)", itype );
        else if(idioma == 3) format(str, sizeof(str), "Bizz Products (%i)", itype );
        else if(idioma == 4) format(str, sizeof(str), "Bizz Products (%i)", itype );
    }
    else if(imodel == 411) {
        if(idioma == 1) str = "Mascara";
        else if(idioma == 2) str = "Mask";
        else if(idioma == 3) str = "Enmascarar";
        else if(idioma == 4) str = "Mask";
    }
    else if(imodel == 412) {
        if(idioma == 1) str = "Capacete";
        else if(idioma == 2) str = "Helmet";
        else if(idioma == 3) str = "Casco";
        else if(idioma == 4) str = "Helmet";
    }
    else if(imodel == 413) {
        if(idioma == 1) str = "Celular";
        else if(idioma == 2) str = "Cellphone";
        else if(idioma == 3) str = "Teléfono Móvil";
        else if(idioma == 4) str = "Telepono";
    }
    else if(imodel == 414) {
        str = "Radio";
    }
    // cadaver system 13 (porta malas view)
    else if(imodel == 450) {
        format(str, sizeof(str), "[corpse %i] %s ", itype, GetCorpseName(itype) );
    }
    else { str = "{808080}Empty{FFFFFF}"; }
    return str;
}
stock ChangeSexStr(playerid) {
    new str[32];
    if(idiom[playerid] == 1) format(str, sizeof str, "Mudar de Sexo");
    else if(idiom[playerid] == 2) format(str, sizeof str, "Change Sex");
    else if(idiom[playerid] == 3) format(str, sizeof str, "Cambiar de Sexo");
    else if(idiom[playerid] == 4) format(str, sizeof str, "Magpalit ng Kasarian");
    return str;
}


forward MSG_InTutorial(playerid, tutorialStepId, timeMSG);
public MSG_InTutorial(playerid, tutorialStepId, timeMSG) {
    // msg chat pra ler o tutorial
    for(new chatlimit = 1; chatlimit < 11; chatlimit++) {
        if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "LEIA O TUTORIAL PARA TER UMA IDEIA DE COMO É O SERVIDOR! PODE SER LONGO, MAS É UM MODO DE JOGO NOVO! VOCÊ NÃO VAI SE ARREPENDER!");
        else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "READ THE TUTORIAL TO HAVE AN IDEA OF HOW THE SERVER IS! MAY BE LONG BUT IT'S A NEW GAME MODE! YOU WILL NOT REGRET!");
        else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡LEA EL TUTORIAL PARA HACERSE UNA IDEA DE CÓMO ES EL SERVIDOR! ¡PUEDE SER LARGO, PERO ES UN NUEVO MODO DE JUEGO! ¡NO TE ARREPENTIRÁS!");
        else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "BASAHIN NG MABUTI ANG TUTORIAL NA ITO UPANG MAGKAROON NG IDEYA KUNG PAPAANO GUMAGANA ANG SISTEMA NG BAGONG GAMEMODE SERVER HINDE KA MAGISISISI!");
    }
    new string[128];
    if(tutorialStepId == 1) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Bem vindo ao ~y~Intense Life~w~! ~y~Novo modo de jogo!~w~ Voce nunca viu nada parecido! Servidor Unico!");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Welcome to ~y~Intense Life~w~New game mode!~w~ You've never seen anything like it! Single Server!");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Bienvenido a ~y~Intense Life~way~¡Nuevo modo de juego!~w~ ¡Nunca has visto nada igual! ¡Servidor único!");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Maligayang pagdating sa ~y~Intense Life~w~New game mode!~w~ Ngayon lang kayo makakakita ng ganitong Single Server!");
    }
    else if(tutorialStepId == 2) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Um ~y~mundo livre e aberto~w~ com diversas coisas para realizar e conquistar.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Welcome to ~y~Intense Life~w~New game mode!~w~ You've never seen anything like it! Single Server!");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Un ~y~mundo libre y abierto~w~ con muchas cosas por lograr y conquistar.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Maligayang pagdating sa ~y~Intense Life~w~New game mode!~w~ Ngayon lang kayo makakakita ng ganitong Single Server!");
    }
    else if(tutorialStepId == 3) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Servidor ~y~sem regras~w~ você ira responder por suas acoes pela dinamica de jogo!");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Server ~y~no rules~w~ you will answer for your actions by the game dynamics!");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Servidor ~y~sin reglas~w~ ¡seras responsable de tus acciones segun la dinámica del juego!");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Itong Server ~y~ ay walang rules~w~ ikaw ang sasagot sa iyong mga aksyon ayon sa game dynamics!");
    }
    else if(tutorialStepId == 4) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Você pode reagir a qualquer assalto, sequestro ou coisas do tipo, ~y~não será punido por admins~w~ como em outros servidores.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~You can react to any robbery, kidnapping or the like, ~y~will not be punished by admins~w~ as on other servers.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Puede reaccionar ante cualquier robo, secuestro o similar, ~y~no será castigado por los administradores~w~ como en otros servidores.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Pwede kang mag react sa kahit anong mang pagnanakaw, kidnapping at iba pa., ~y~ at hinde ka paparusahan ng admins~w~ tulad sa ibang server.");
    }
    else if(tutorialStepId == 5) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Mas ~y~as vezes e melhor se render~w~ a prisao/assalto/sequestro~n~tendo como bonus reducao no tempo e na perda de skills.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~But ~y~sometimes it better to surrender~w~ to jail/robbery/kidnapping~n~as a bonus in reducing time and skill loss.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Puede reaccionar ante cualquier robo, secuestro o similar, ~y~no sera castigado por los administradores~w~ como en otros servidores.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Pero ~y~minsan mas mabuting sumuko nalang~w~ sa jail/robbery/kidnapping~n~ upang makabawas ng oras at pagkawala ng skill.");
    }
    else if(tutorialStepId == 6) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Ao zerar sua vida voce vai ficar ~y~caido no chao~n~~w~podendo ser assaltado,morto,sequeestrado,preso e até mesmo levantado.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~By zeroing your life you will be ~y~fallen to the ground~n~~w~and can be robbed,killed,kidnapped,arrested and even lifted.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Cuando termines tu vida seras ~y~caido al suelo~n~~w~y pueden robarte, matarte, secuestrarte, arrestarte e incluso levantarte.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Kapag na ubos ang iyong buhay ~y~ikaw ay mananatili sa lapag~n~~w~at pwede kang nakawan,patayin,arestohin,at buhayin.");
    }
    else if(tutorialStepId == 7) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Quando ~y~desconectar~w~ do servidor seu personagem ira ficar ~y~dormindo~w~ no chao, podendo ser roubado, preso e ate morto..."); // ... não aparece pq no 'o' do morto chegou no limite
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~When ~y~disconnect~w~ from the server your character will be ~y~sleeping~w~ on the floor, and can be robbed, arrested and even killed...");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Cuando ~y~se desconecte~w~ del servidor, su personaje estara ~y~durmiendo~w~ en el suelo, y puede ser asaltado, arrestado e incluso asesinado...");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Kapag ~y~ ikaw ay nag disconnect~w~ sa server ang iyong character ay ~y~matutulog~w~ sa lapag, at pweding nakawan, arestohin at patayin...");
    }
    else if(tutorialStepId == 8) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Mesmo automatico, o servidor não deixa de ser ~y~realista~w~, como por exemplo o sistema de cadaver:");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Even automatic, the server is nonetheless ~y~realistic~w~, such as the cadaver system:");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Incluso automatico, el servidor sigue siendo ~y~realista~w~, como el sistema de cadaver:");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Kahit automatiko ang server ito ay ~y~Makatotohanan~w~, tulad ng cadaver system:");
    }
    else if(tutorialStepId == 9) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Ao matar alguem pegue o ~y~cadaver~w~ e desove na agua ou a policia podera investigar e te achar como culpado.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~When killing someone take ~y~cadaver~w~ and spawn in the water or the police can investigate and find you guilty.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~ Al matar a alguien, toma el ~y~cadaver~w~ y tiralo al agua o la policía puede investigar y encontrarte culpable.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Kapag ikaw ay pumatay maari mong ~y~Itago/Kuhain~w~ ang bangkay, dahil ang mga pulis ay maaaring mag imbestiga at ikaw ay makakasuhan.");
    }
    else if(tutorialStepId == 10) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~PvP unico~w~: danos altos e realistas que variam de acordo com a aerea que pega: cabeça,peito,pernas,ombros");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~Unique PvP~w~: high and realistic damage that varies according to the area it picks up: head, chest, legs, shoulders");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~Unique PvP~w~: dano alto y realista que varia segun la aérea que toma: cabeza, pecho, piernas, hombros");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~Unique PvP~w~: mataas at makatotohanan ang pinsala depende kung saan ito tatama: Ulo, Dibdib, Hita, Balikat");
    }
    else if(tutorialStepId == 11) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Mais de 50 ~y~Novas Armas~w~ com danos variados~n~~y~Novas Bombas~w~ como: flashbang, c4, smoke grenade...");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Over 50 ~y~New Weapons~w~ with miscellaneous damage~n~~y~New Bombs~w~ like: flashbang, c4, smoke grenade...");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Más de 50 ~y~Nuevas armas~w~ con varios daños~n~~y~Nuevas bombas~w~ como: flashbang, c4, granada de humo...");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Mahigit sa 50 ang ~y~Bagong mga Baril~w~ na mayroong ibat ibang pinsala~n~~y~New Bombs~w~ tulad ng: flashbang, c4, smoke grenade...");
    }
    else if(tutorialStepId == 12) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~ANTI-DM~w~ inocente sem razao causa punicao automatica! Existem sistemas de ~y~Abordagem Policial~w~ e ~y~Assalto");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~ANTI-DM~w~ inescent for no reason causes automatic punishment! Are There~y~ Police Approach~w~ and ~y~Assault Systems");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~ANTI-DM~w~ ¡Inocente sin razón causa castigo automático! Hay ~y~Aproximación policial~w~ y ~y~Sistemas de asalto");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~ANTI-DM~w~ Mayroong~y~ Police Approach~w~ at ~y~Assault Systems. Manakit ng walang dahilan ay automatikong mapaparusahan!");
    }
    else if(tutorialStepId == 13) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~ANTI-CHEAT PRO~w~. Se estava procurando um servidor livres de hacks finalmente achou, investimos muito nisso.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~ANTI-CHEAT PRO~w~. If you were looking for a hack-free server, you finally found it, we invested a lot in it.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~PROTECCIÓN ANTITRAMPAS~w~. Si estaba buscando un servidor libre de piratería, finalmente lo encontró, invertimos mucho en él.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~ANTI-CHEAT PRO~w~. Kapag naghahanap ka ng Hack free server, Ito na yun, ngunit kami ay mag-iimbistiga at may-sapat na parusa.");
    }
    else if(tutorialStepId == 14) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Servidor focado em ~y~niveis de habilidade~w~, ~y~SKILLS~n~~w~Existem diversas SKILLs, ex: crime,policial,pesca,mecanica...");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Server focused on ~y~skill levels~w~,~y~SKILLS~n~~w~There are several SKILLs, ex: crime,police,fishing,mechanics...");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Servidor enfocado en ~y~niveles de habilidad~w~, ~y~HABILIDADES~n~~w~Hay varias HABILIDADES, ej: crimen, policía, pesca, mecánica...");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Ang server ay nakatuon sa iyong ~y~skill levels~w~,~y~SKILLS~n~~w~. meron pang ibat-ibat skills tulad ng: crime,police,fishing,mechanics...");
    }
    else if(tutorialStepId == 15) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Subindo seus SKILLs você ~y~desbloqueia ações ~w~e ~y~aumenta eficacia/lucro das ações~w~ que já pode fazer.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Raising your SKILLs you ~y~ unlocks actions ~w~and ~y~increases the effectiveness/profitability of the~w~ actions you can already do.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Actualizando tus HABILIDADES ~y~desbloqueas acciones ~w~y ~y~aumentas la efectividad/beneficio de las acciones~w~ que ya puedes hacer.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Sa pagpapalakas ng iyong SKILLs~y~ pwede mo ma unlock ~w~at ~y~mapataas ang kakayahan at epektibo ng mga~w~ aksyon na pwede magawa.");
    }
    else if(tutorialStepId == 16) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~Empregos e ORGs:~w~você pode ser desde um piloto de aviao,caminhoneiro ate um assaltante ou policial...");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~Jobs and ORGs:~w~you can be from a plane pilot, truck driver to a burglar or police officer...");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~Trabajos y ORG:~w~puedes ser cualquier cosa, desde piloto de avión, camionero hasta ladrón o policía...");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~Jobs and ORGs:~w~pwede ka maging plane pilot, truck driver to a burglar or police officer...");
    }
    else if(tutorialStepId == 17) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Cada emprego te dará uma habilidade nova, exemplos:~w~~n~~w~Vendedor de Armas~n~~y~(montar armas unicas)");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Each job will give you a new skill, examples:~w~~n~~w~Weapon Salesman~n~~y~(build unique weapons)");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Cada trabajo te dará una nueva habilidad, ejemplos:~w~~n~~w~Vendedor de armas~n~~y~(construir armas ï¿½nicas)");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Sa bawat trabaho ay mabibigyan ka ng bagong skill, Halimbawa:~w~~n~~w~Weapon Dealer~n~~y~(makagawa ng kakaibang sandata)");
    }
    else if(tutorialStepId == 18) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Ladrão de Veiculos~n~~y~(ligação direta em carros)~n~~w~Advogado~n~~y~(soltar presos antes da hora)~n~~w~e varios outros...");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Vehicle Thief~n~~y~(direct car connection)~n~~w~Lawyer~n~~y~(release arrested early)~n~~w~and several others...");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Ladrón de vehículos~n~~y~(marcación directa en automóviles)~n~~w~Abogado~n~~y~(liberar a los prisioneros demasiado pronto)~n~~w~y varios otros...");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Vehicle Thief~n~~y~(direct car connection)~n~~w~Lawyer~n~~y~(makapag-palaya ng bilango sa maikling oras)~n~~w~at iba pa...");
    }
    else if(tutorialStepId == 19) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~Quase todos os empregos tem SKILLs~n~~w~ex:Mecanico, certo level libera tunning, neon, nitro, reparo mais rapido.");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~Almost every job has SKILLs~n~~w~ex:Mechanic, certain level releases tunning, neon, nitro, faster repair.");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~Casi todos los trabajos tienen HABILIDADES~n~~w~ex:Mecánico, ciertos niveles desbloquean afinación, neón, nitro, reparación más rápida.");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~Lahat ng job ay may SKILLs~n~~w~ex:Mechanic, certain level releases tunning, neon, nitro, faster repair.");
    }
    else if(tutorialStepId == 20) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Policiais com mais SKILLs tem ~y~acesso a melhores:~n~~w~Armas,Veiculos.~n~ORGS:~y~PD-FBI-CIA-SWAT-GN");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Police with more SKILLs have ~y~access to better:~n~~w~Guns,Vehicles.~n~ORGS:~y~PD-FBI-CIA-SWAT-GN");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Policias con mas SKILLs tienen~y~acceso a mejores:~n~~w~Armas,Vehiculos.~n~ORGS:~y~PD-FBI-CIA-SWAT-GN");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Pulis na mayroong mataas na SKILLs ay merong ~y~access sa mas maganda tulad ng:~n~~w~Baril,Sasakyan.~n~ORGS:~y~PD-FBI-CIA-SWAT-GN");
    }
    else if(tutorialStepId == 21) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Você pode comprar diversos bens,como por exemplo:~y~~n~carros~n~motos~n~barcos~n~aeronaves~n~casas~n~empresas");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~You can buy various goods such as: ~y~~n~cars~n~motorcycles~n~boats~n~aircraft~n~houses~n~companies");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~Puedes comprar varios productos, por ejemplo:~y~~n~automï¿½viles~n~motocicletas~n~barcos~n~aviones~n~casas~n~negocios");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~Maari kang makabili ibat ibat bagay tulad ng: ~y~~n~cars~n~motorcycles~n~boats~n~aircraft~n~houses~n~companies");
    }
    else if(tutorialStepId == 22) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~Junte-se a uma facção ~w~ou ~y~crie a sua propria~w~~n~só precisa de membros, dinheiro e uma casa para transformar em HQ");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~Join a faction ~w~or ~y~create your own~w~~n~only needs members, money and a house to turn into HQ");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~Únete a una facción ~w~o ~y~crea la tuya propia~w~~todo lo que necesitas son miembros, dinero y una casa para convertirla en un cuartel general");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~Sumali sa faction ~w~o ~y~ gumawa ng iyong sarili~w~~n~kailangan lang ng myembro, pera at bahay para gawing HQ");
    }
    else if(tutorialStepId == 23) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~y~Gerencie:~w~~n~membros~n~cargos~n~salarios~n~taxas~n~armamentos~n~veiculos~n~drogas~n~domine gangzones~n~gerencie gangzones");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~y~Manage:~w~~n~members~n~positions~n~wages~n~fees~n~weapons~n~vehicles~n~drugs~n~dominate gangzones~n~manage gangzones");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~y~Administrar:~w~~n~miembros~n~puestos~n~salarios~n~tarifas~n~armas~n~vehículos~n~drogas~dominar las gangzones~n~administrar las gangzones");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~y~Manage:~w~~n~members~n~positions~n~wages~n~fees~n~weapons~n~vehicles~n~drugs~n~dominate gangzones~n~manage gangzones");
    }
    else if(tutorialStepId == 24) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"~w~Explore o servidor, Faca as missoes para ganhar bonus de XP,SKILL,DINHEIRO e conhecer tudo do servidor! ~y~/mission");
        else if(idiom[playerid] == 2) format(string,sizeof(string),"~w~Explore the server, do the quests to earn XP, SKILL, MONEY bonuses and get to know everything from the server!~y~/mission");
        else if(idiom[playerid] == 3) format(string,sizeof(string),"~w~¡Explora el servidor, realiza las misiones para ganar XP, HABILIDAD, DINERO adicionales y conoce todo sobre el servidor! ~y~/mision");
        else if(idiom[playerid] == 4) format(string,sizeof(string),"~w~I explore ang server, gawin ang quests para sa XP, SKILL, MONEY bonuses at malaman ang lahat tungkol sa server!~y~/mission");
    }
    GameTextForPlayerEx(playerid, string, timeMSG, 3);
}
forward MSG_AccountBanned(playerid, Float:horas);
public MSG_AccountBanned(playerid, Float:horas) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Essa conta está banida e o banimento dela expira em: %.1f horas.", horas);
  else if(idiom[playerid] == 2) format(str, sizeof str, "This account is banned and its ban expires in: %.1f hours.", horas);
  else if(idiom[playerid] == 3) format(str, sizeof str, "Esta cuenta está prohibida y su prohibición vence en: %.1f horas.", horas);
  else if(idiom[playerid] == 4) format(str, sizeof str, "Ang account na ito ay banned at ang ban expires nito ay: %.1f hours.", horas);
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_FailPasswordBlockLogin(playerid);
public MSG_FailPasswordBlockLogin(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Você errou muitas vezes a senha, o ANTI CHEAT bloqueou seu endereço IP por 30 minutos para proteger essa conta. Por favor, espere e volte mais tarde.");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"You have often misplaced your password, ANTI CHEAT has blocked your IP address for 30 minutes to protect this account. Please wait and come back later.");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"Te equivocaste de contraseña muchas veces, ANTI CHEAT ha bloqueado tu dirección IP durante 30 minutos para proteger esta cuenta. Por favor, espere y vuelva más tarde.");
  else if(idiom[playerid] == 4) format(str,sizeof(str),"Madalas na pagkakamali sa paglagay ng password, ANTI CHEAT has blocked your IP address sa loob ng 30 minutes upang ma-protektahan ang account ito. Maaring maghitay at bumalik nalamang.");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"BRUTE PASSATK PROTECT",str,"Ok","");
}
forward MSG_RemovedFromStaff(playerid);
public MSG_RemovedFromStaff(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você foi retirado da staff!");
  else if(idiom[playerid] == 2) format(str, sizeof str, "You have been removed from the staff!");
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡Has sido eliminado del personal!");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Ikaw ay natanggal sa pagiging staff!");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_RemovedFromFaction(playerid);
public MSG_RemovedFromFaction(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você foi demitido da sua antiga facções!");
  else if(idiom[playerid] == 2) format(str, sizeof str, "You've been fired from your former factions!");
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡Te han despedido de tus antiguas facciones!");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Ikaw ay tinangal sa dating mong factions!");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_VipIsOver(playerid);
public MSG_VipIsOver(playerid) {
  if(idiom[playerid] == 1) {  SendClientMessage(playerid, COLOR_LIGHTRED, "Sua VIP expirou!"); }
  else if(idiom[playerid] == 2) {  SendClientMessage(playerid, COLOR_LIGHTRED, "Your VIP expired!"); }
  else if(idiom[playerid] == 3) {  SendClientMessage(playerid, COLOR_LIGHTRED, "Su VIP caducado!"); }
  else if(idiom[playerid] == 4) {  SendClientMessage(playerid, COLOR_LIGHTRED, "Ang iyong VIP ay expired na!"); }
}
forward MSG_AlreadyHaveFactionName(playerid);
public MSG_AlreadyHaveFactionName(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Já existe uma facção com esse nome! Escolha outro nome!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "A faction with that name already exists! Choose another name!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Ya existe una facción con ese nombre! ¡Elige otro nombre!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "Ang pangalan ng Faction na ito ay nagamit na! Gumamit ng ibang pangalan!");
}
forward MSG_NeedToBeInfrontYourHouse(playerid);
public MSG_NeedToBeInfrontYourHouse(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Você precisa estar em frente a sua casa para transforma-la em HQ!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "You need to be in front of your house to turn it into an HQ!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Tienes que estar frente a tu casa para convertirla en un cuartel general!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "Kinakailangang ikaw ay nasa-tapat ng iyong tahanan upang ito ay magawang HQ!");
}
forward MSG_ShowCurrentLevel(playerid, skillidefined);
public MSG_ShowCurrentLevel(playerid, skillidefined) {
  new str[128];
  if(skillidefined == LVL_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] Experience:[%i/%i]",
        GetPlayerLevel(playerid, LVL_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, LVL_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, LVL_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == COP_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] COP:[%i/%i]",
        GetPlayerLevel(playerid, COP_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, COP_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, COP_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == CRIMINAL_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] Criminal:[%i/%i]",
        GetPlayerLevel(playerid, CRIMINAL_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, CRIMINAL_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, CRIMINAL_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == PARAMEDIC_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] PARAMEDIC:[%i/%i]",
        GetPlayerLevel(playerid, PARAMEDIC_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, PARAMEDIC_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, PARAMEDIC_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == FISHING_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] FISHING:[%i/%i]",
        GetPlayerLevel(playerid, FISHING_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, FISHING_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, FISHING_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == MECANIC_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] MECANIC:[%i/%i]",
        GetPlayerLevel(playerid, MECANIC_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, MECANIC_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, MECANIC_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == LAWYER_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] LAWYER:[%i/%i]",
        GetPlayerLevel(playerid, LAWYER_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, LAWYER_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, LAWYER_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == VEHTHIEF_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] VEHICLE THIEF:[%i/%i]",
        GetPlayerLevel(playerid, VEHTHIEF_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, VEHTHIEF_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, VEHTHIEF_SKILLID_IDEFINED))
    );
  }
  else if(skillidefined == WEAPONDEALLER_SKILLID_IDEFINED)
  {
    format(str, sizeof(str), "Current Level:[%i] WEAPON DEALLER:[%i/%i]",
        GetPlayerLevel(playerid, WEAPONDEALLER_SKILLID_IDEFINED),
        GetPlayerXpInLevel(playerid, WEAPONDEALLER_SKILLID_IDEFINED),
        GetPlayerXpToNextLevel(GetPlayerLevel(playerid, WEAPONDEALLER_SKILLID_IDEFINED))
    );
  }
  SendClientMessage(playerid, COLOR_NEWS, str);
}
forward MSG_HospitalBills(playerid, type, price);
public MSG_HospitalBills(playerid, type, price) {
  new str[128];
  new typeText[20];
  if(idiom[playerid] == 1) {
    if(type == 1) { typeText = "banco"; }
    else if(type == 2) { typeText = "bolso"; }
    format(str, sizeof str, "Contas hospitalares pagas -%i$ (%s)", price, typeText);
  }
  else if(idiom[playerid] == 2) {
    if(type == 1) { typeText = "bank"; }
    else if(type == 2) { typeText = "pocket"; }
    format(str, sizeof str, "Hospital bills paid -%i$ (%s)", price, typeText);
  }
  else if(idiom[playerid] == 3) {
    if(type == 1) { typeText = "banco"; }
    else if(type == 2) { typeText = "bolsillo"; }
    format(str, sizeof str, "Facturas hospitalarias pagadas -%i$ (%s)", price, typeText);
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_VehicleCrashLicenseTest(playerid);
public MSG_VehicleCrashLicenseTest(playerid) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Procure uma oficina no GPS para consertar esse veiculo ou podersó reprovar no teste!");
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "Look for a GPS workshop to repair this vehicle or you may fail the test!");
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "¡Busque un taller de GPS para reparar este vehículo o puede fallar la prueba!");
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Maghanap ng GPS workshop para ayusin ang sasakyang ito o mabibigo ka sa pagsusulit!");
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_PressAltToTurnVehicle(playerid);
public MSG_PressAltToTurnVehicle(playerid) {
  if(idiom[playerid] == 1)      { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Aperte 'ALT' para ligar o veiculo!");  }
  else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Press 'ALT' to turn on the vehicle!");  }
  else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_LIGHTBLUE, "¡Presiona 'ALT' para arrancar el vehículo!");  }
  else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Pindutin ang 'ALT' upang mabuksan ang sasakyan");  }
}
forward MSG_PressQnEtoChangeWpVeh(playerid);
public MSG_PressQnEtoChangeWpVeh(playerid) {
  if(idiom[playerid] == 1)      { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Aperte 'Q' ou 'E' trocar de arma!");  }
  else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Press 'Q' or 'E' to change your weapon!");  }
  else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Pressione 'Q' ou 'E' para cambiar el arma!");  }
  else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_LIGHTBLUE, "Pindutin ang 'Q' or 'E' upang magpalit ng sandata");  }
}
forward MSG_TazeInColldown(playerid);
public MSG_TazeInColldown(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, -1, "Seu tazer não está carregado e pronto para uso.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, -1, "You tazer is not charged and not ready to use.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, -1, "Tu tazer no está cargado y listo para usar.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, -1, "Ang iyong tazer ay wala pang charge at hindi pa ito handang gamitin");
}
forward MSG_HandsupDamageReduction(playerid);
public MSG_HandsupDamageReduction(playerid) {
  if(idiom[playerid] == 1) { SendClientMessage(playerid, COLOR_LIGHTRED, "DANO REDUZIDO! ESSE JOGADOR ESTA RENDIDO!"); }
  else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_LIGHTRED, "REDUCED DAMAGE! THIS PLAYER IS RENDERED!"); }
  else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_LIGHTRED, "¡DAÑO REDUCIDO! ¡ESTE JUGADOR ESTÁ RENDIDO!"); }
  else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_LIGHTRED, "BAWASAN ANG PINSALA! ANG PLAYER NA ITO AY NAKA RENDERED!"); }
  if(IsACop(playerid)) {
      if(idiom[playerid] == 1) { SendClientMessage(playerid, COLOR_LIGHTRED, "APENAS MIRE PARA ALGEMAR E LEVE PARA A CADEIA"); }
      else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_LIGHTRED, "JUST AIM FOR HANDCUFFS AND TAKE IT TO JAIL"); }
      else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_LIGHTRED, "SOLO APUNTA POR LAS ESPOSAS Y LláVALO A LA Cï¿½RCEL"); }
      else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_LIGHTRED, "TUTUKAN UPANG MAPUSASAN AT DALIN ITO SA BILANGGUAN"); }
  } else {
      if(idiom[playerid] == 1) {  SendClientMessage(playerid, COLOR_LIGHTRED, "APENAS MIRE PARA ROUBAR OU AMARRAR E SEQUESTRAR"); }
      else if(idiom[playerid] == 2) {  SendClientMessage(playerid, COLOR_LIGHTRED, "JUST AIM TO STEAL OR TIE AND KIDNEW"); }
      else if(idiom[playerid] == 3) {  SendClientMessage(playerid, COLOR_LIGHTRED, "SOLO APUNTAR A ROBAR O AMARRAR Y KIDNEW"); }
      else if(idiom[playerid] == 4) {  SendClientMessage(playerid, COLOR_LIGHTRED, "TUTUKAN UPANG MANAKAWAN O ITALI AT MA-KIDNAP"); }
  }
}
forward MSG_TrunkSlotBlockedForVehVIP(playerid);
public MSG_TrunkSlotBlockedForVehVIP(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Slots 11-20 são apenas para veiculos VIP!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "Slots 11-20 are for VIP vehicles only!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Los espacios 11-20 son solo para vehículos VIP!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "Slots 11-20 ay para lamang sa VIP vehicles");
}
forward MSG_StopTreasureHunt(playerid);
public MSG_StopTreasureHunt(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Você encerrou a Caça a Tesouros, Caça a Tesouros só podem ser feitas em barcos!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "You've finished Treasure Hunting, Treasure Hunting can only be done on boats!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Has terminado Treasure Hunting, Treasure Hunting solo se puede hacer en barcos!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "Natapos mo na ang Treasure Hunting, Ang Treasure Hunting ay pwede lang gawin kapag ikaw ay nasa banka!");
}
forward MSG_BlockedVehVIP(playerid);
public MSG_BlockedVehVIP(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, -1, "[CARRO BLOQUEADO] Este é um carro VIP!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, -1, "[BLOCKED CAR] This is a VIP car!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, -1, "[COCHE BLOQUEADO] ¡Este es un coche VIP!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, -1, "[BLOCKED CAR] Ito ay isang VIP na kotse");
}
forward MSG_BlockedVehParamedic(playerid);
public MSG_BlockedVehParamedic(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, -1, "[CARRO BLOQUEADO] Este é um carro PARAMÉDICO!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, -1, "[BLOCKED CAR]This is a PARAMEDIC car!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, -1, "[COCHE BLOQUEADO] ¡Este es un coche PARAMÉDICO!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, -1, "[BLOCKED CAR]Ito ay isang PARAMEDIC na kotse");
}
forward MSG_FollowMapCheckPoint(playerid);
public MSG_FollowMapCheckPoint(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, -1, "Siga até o checkpoint marcado no mapa!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, -1, "Go to the checkpoint marked on the map!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, -1, "¡Ve al punto de control marcado en el mapa!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, -1, "Puntahan ang checkpoint marked na nasa mapa!");
}
forward MSG_FinishTrainRoutes(playerid, price);
public MSG_FinishTrainRoutes(playerid, price) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "(%i$) você terminou as rotas, aguarde até o próximo pagamento.", price);
  else if(idiom[playerid] == 2) format(str, sizeof str, "(%i$) you have finished the routes, wait until the next payment.", price);
  else if(idiom[playerid] == 3) format(str, sizeof str, "(%i$) has terminado las rutas, espera hasta el próximo pago.", price);
  else if(idiom[playerid] == 4) format(str, sizeof str, "(%i$) Natapos mo na ang ruta, hintayin lamang ang sunod na bayad", price);
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_Hungry(playerid);
public MSG_Hungry(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você está com muita FOME para correr ou pular, procure um lugar para COMER (/gps)");
  else if(idiom[playerid] == 2) format(str, sizeof str, "You're too HUNGRY to run or jump, look for a place to EAT (/gps)");
  else if(idiom[playerid] == 3) format(str, sizeof str, "Tienes demasiada HAMBRE para correr o saltar, busca un lugar para COMER (/gps)");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Masyado kanang GUTOM upang tumakbo o tumalon, humanap ng lugar na mapagkakainan (/gps)");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_Thirst(playerid);
public MSG_Thirst(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você está com muita SEDE para correr ou pular, procure um lugar para BEBER (/gps)");
  else if(idiom[playerid] == 2) format(str, sizeof str, "You're too THIRTY to run or jump, look for a place to DRINK (/gps)");
  else if(idiom[playerid] == 3) format(str, sizeof str, "Tienes TREINTA para correr o saltar, busca un lugar para BEBER (/gps)");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Masyado kanang UHAW upang tumakbo o tumalon, humanap ng lugar na mapagiinuman (/gps)");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_Breath(playerid);
public MSG_Breath(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você está sem FOLEGO para correr ou pular, procure um lugar para DESCANSE (/gps)");
  else if(idiom[playerid] == 2) format(str, sizeof str, "You're out of BREATH to run or jump, find a place to REST (/gps)");
  else if(idiom[playerid] == 3) format(str, sizeof str, "No tienes ALIENTO para correr o saltar, busca un lugar para DESCANSAR (/gps)");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Wala kanang sapat na HININGA upang tumakbo o tumalon, humanap ng lugar upang makapag-pahinga (/gps)");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_CopsCantUseCommandINTnVW(playerid);
public MSG_CopsCantUseCommandINTnVW(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "COPs não podem usar esse comando em Interior e Virtual World!");
  else if(idiom[playerid] == 2) format(str, sizeof str, "COPs cannot use this command in Interior and Virtual World!");
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡Los COP no pueden usar este comando en Interior y Virtual World!");
  else if(idiom[playerid] == 4) format(str, sizeof str, "COPs ay hindi pwedeng gamitin ang command na ito sa Interior at Virtual World!");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  if(idiom[playerid] == 1) format(str, sizeof str, "(se não estiver em um, entre e saia de uma loja)");
  else if(idiom[playerid] == 2) format(str, sizeof str, "(if not in one, enter and exit a store)");
  else if(idiom[playerid] == 3) format(str, sizeof str, "(si no en uno, entrar y salir de una tienda)");
  else if(idiom[playerid] == 4) format(str, sizeof str, "(kung hindi sa isa, maaaring pumasok at lumabas sa store)");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_CantUseCommandINTnVW(playerid);
public MSG_CantUseCommandINTnVW(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você não pode usar esse comando em Interior e Virtual World!");
  else if(idiom[playerid] == 2) format(str, sizeof str, "You cannot use this command in Interior and Virtual World!");
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡No puede usar este comando en Interior y Virtual World!");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Hindi pwedeng gamitin ang command na ito sa Interior at Virtual World!");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  if(idiom[playerid] == 1) format(str, sizeof str, "(se não estiver em um, entre e saia de uma loja)");
  else if(idiom[playerid] == 2) format(str, sizeof str, "(if not in one, enter and exit a store)");
  else if(idiom[playerid] == 3) format(str, sizeof str, "(si no en uno, entrar y salir de una tienda)");
  else if(idiom[playerid] == 4) format(str, sizeof str, "(kung hindi sa isa, maaaring pumasok at lumabas sa store)");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DriveByWithoutDriver(playerid);
public MSG_DriveByWithoutDriver(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "NÃO FAÇA DB SEM MOTORISTA! NÃO É PERMITIDO!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "DONT DO DB WITHOUT DRIVER! ITS NOT ALLOWED!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡NO HAGAS DB SIN UN CONDUCTOR! ¡NO ES PERMITIDO!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "WAG MONG GAWIN ANG DB KUNG WALA ANG DRIVER! HINDI ITO PINAPAYAGAN!");
}
forward MSG_NoLicenseA(playerid);
public MSG_NoLicenseA(playerid) {
    new string[256];
    if(idiom[playerid] == 1) format(string,sizeof(string),"Você não tem a licença de motorista A\nA= Motos\nPara alugar uma FAGGIO você não precisa de nenhuma licença\nUse: /gps (Centro de Licenças) para tirar sua licença!");
    else if(idiom[playerid] == 2) format(string,sizeof(string),"You don't have a driver's license A\nA= Motorcycles\nTo rent a FAGGIO you don't need any license\nUse: /gps (License Center) to get your license!");
    else if(idiom[playerid] == 3) format(string,sizeof(string),"No tienes licencia de conducir A\nA= Motocicletas\nPara alquilar una FAGGIO no necesitas ninguna licencia\nUsa: /gps (Centro de licencias) para obtener tu licencia!");
    else if(idiom[playerid] == 4) format(string,sizeof(string),"Ikaw ay walang lisensya upang magmaneho ng A\nA= Motorsiklo\nHindi mo kinakailangan ng lisensya upang mag-rent ng FAGGIO\nUse: /gps (License Center) upang kumuha ng lisensya!");
    ShowPlayerDialog(playerid,420,DIALOG_STYLE_MSGBOX,"Rent Without GroundLicense",string,"Ok","");
}
forward MSG_NoLicenseB(playerid);
public MSG_NoLicenseB(playerid) {
    new string[256];
    if(idiom[playerid] == 1) format(string,sizeof(string),"Você não tem a licença de motorista B\nB= Carros\nPara alugar uma FAGGIO você não precisa de nenhuma licença\nUse: /gps (Centro de Licenças) para tirar sua licença!");
    else if(idiom[playerid] == 2) format(string,sizeof(string),"You don't have a driver's license B\nB= Cars\nTo rent a FAGGIO you don't need any license\nUse: /gps (License Centre) to get your license!");
    else if(idiom[playerid] == 3) format(string,sizeof(string),"No tienes licencia de conducir B\nB= Coches\nPara alquilar un FAGGIO no necesitas ninguna licencia\nUsa: /gps (Centro de Licencias) para obtener tu licencia!");
    else if(idiom[playerid] == 4) format(string,sizeof(string),"Ikaw ay walang lisensya upang magmaneho ng A\nA= Kotse\nHindi mo kinakailangan ng lisensya upang mag-rent ng FAGGIO\nUse: /gps (License Center) upang kumuha ng lisensya!");
    ShowPlayerDialog(playerid,420,DIALOG_STYLE_MSGBOX,"Rent Without GroundLicense",string,"Ok","");
}
forward MSG_DontHaveDonatePoints(playerid, value);
public MSG_DontHaveDonatePoints(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você não tem %i Doar Pontos", value);
  else if(idiom[playerid] == 2) format(str, sizeof str, "You don't have enough %i Donate Points", value);
  else if(idiom[playerid] == 3) format(str, sizeof str, "No tienes %i Donar Puntos", value);
  else if(idiom[playerid] == 4) format(str, sizeof str, "Ikaw ay walang sapat na %i Donate Points", value);
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DontHaveMoney(playerid, value);
public MSG_DontHaveMoney(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você não tem %i$", value);
  else if(idiom[playerid] == 2) format(str, sizeof str, "You don't have enough%i$", value);
  else if(idiom[playerid] == 3) format(str, sizeof str, "No tienes %i$", value);
  else if(idiom[playerid] == 4) format(str, sizeof str, "Ikaw ay walang sapat na%i$", value);
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DontHaveWeaponMaterial(playerid, value);
public MSG_DontHaveWeaponMaterial(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você não tem %i Material de Arma", value);
  else if(idiom[playerid] == 2) format(str, sizeof str, "You don't have %i Weapon Material", value);
  else if(idiom[playerid] == 3) format(str, sizeof str, "No tienes %i material de arma", value);
  else if(idiom[playerid] == 4) format(str, sizeof str, "Ikaw ay walang sapat na %i Weapon Material", value);
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DontHaveSkillToMakeWeapon(playerid, skills_needed);
public MSG_DontHaveSkillToMakeWeapon(playerid, skills_needed) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "Você tem %i nível de Vendedor de Armas, para fazer esta arma você precisa de %i nível de Revendedor de Armas.", GetLevelInXp(WEAPONDEALLERskills[playerid]), GetLevelInXp(skills_needed) );
  else if(idiom[playerid] == 2) format(str, sizeof(str), "You have %i Weapon Dealer level, to make this weapon you need %i Weapon Dealer level.", GetLevelInXp(WEAPONDEALLERskills[playerid]), GetLevelInXp(skills_needed) );
  else if(idiom[playerid] == 3) format(str, sizeof(str), "Tienes %i nivel de Vendedor de Armas, para fabricar esta arma necesitas %i nivel de distribuidor de armas.", GetLevelInXp(WEAPONDEALLERskills[playerid]), GetLevelInXp(skills_needed) );
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Mayroong kang %i Weapon Dealer level, upang magawa ang weapon na ito kailangan mo ng %i Weapon Dealer level.", GetLevelInXp(WEAPONDEALLERskills[playerid]), GetLevelInXp(skills_needed) );
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DontHaveSkillLevelToCMD(playerid, skillname[], value);
public MSG_DontHaveSkillLevelToCMD(playerid, skillname[], value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "Você deve estar no nível %s: %i para usar este comando!", skillname, GetLevelInXp(value));
  else if(idiom[playerid] == 2) format(str, sizeof str, "You to be %s level: %i to use this command!", skillname, GetLevelInXp(value));
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡Debes tener %s de nivel: %i para usar este comando!", skillname, GetLevelInXp(value));
  else if(idiom[playerid] == 4) format(str, sizeof str, "Kinakailangan ay %s level: %i upang magamit ang command na ito!", skillname, GetLevelInXp(value));
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_AlreadyHaveAllLicenses(playerid);
public MSG_AlreadyHaveAllLicenses(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Você já tem todas as licenças!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "You already have all licenses!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Ya tienes todas las licencias!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "Nasaiyo na ang lahat ng lisensya!");
}
forward MSG_NeedPlayerOtherMarkToBet(playerid);
public MSG_NeedPlayerOtherMarkToBet(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid,COLOR_LIGHTRED,"Você precisa de um parceiro na outra marca para fazer a aposta!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid,COLOR_LIGHTRED,"You need a partner on the other brand to place the bet!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid,COLOR_LIGHTRED,"¡Necesita un socio en la otra marca para hacer la apuesta!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid,COLOR_LIGHTRED,"kailangan mo ng isang partner sa kabilang panig upang maglagay ng taya!");
}
forward MSG_DontHaveSlotsInBag(playerid);
public MSG_DontHaveSlotsInBag(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Você não tem Slots suficientes em sua bolsa.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "You do not have Slots enough in your bag.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "No tienes suficientes tragamonedas en tu bolsa.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTRED, "Ikaw ay walang sapat na Slot sa iyong bag");
}
forward MSG_NeedPeopleAroundToCreateFac(playerid, num_need);
public MSG_NeedPeopleAroundToCreateFac(playerid, num_need) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você precisa de %i players sem facções perto de você para comeï¿½ar uma facções!", num_need );
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You need %i players with no Factions near you to start a Factions!", num_need );
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "¡Necesitas %i jugadores que no tengan Facciones cerca de ti para iniciar Facciones!", num_need );
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Kinakailangan mo ng %i players na walang pang Factions na malapit sayo upang gumawa ng Factions!", num_need );
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_NoDepotAcessEnough(playerid);
public MSG_NoDepotAcessEnough(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "Você não tem DEPOT_ACESS suficiente, escolha a última opção para comprar!");
  else if(idiom[playerid] == 2) format(str, sizeof(str), "You don't have enough DEPOT_ACESS, choose the last option to buy! ");
  else if(idiom[playerid] == 3) format(str, sizeof(str), "No tienes suficiente DEPOT_ACESS, elige la última opción para comprar.");
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Ikaw ay walang sapat na DEPOT_ACESS, piliin ang huling option upang makabili  ");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_AboutOrgs(playerid);
public MSG_AboutOrgs(playerid) {
    new str[128], final[1024];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "As organizações são dividas em 2:");
        strcat(final, str);
        format(str, sizeof(str), "\n\n1- Corporações Governamentais, tais como LSPD,FBI,SWAT,NATIONAL GUARD,CIA,PARAMEDICS...");
        strcat(final, str);
        format(str, sizeof(str), "\nPara entrar em uma organização basta ter licenças, patentes e portes e passar nos testes em seus departamentos (/gps)");
        strcat(final, str);
        format(str, sizeof(str), "\n\n2- facções criadas pelos jogadores, basta comprar uma casa aperta Y na porta e selecionar a opção Criar facções");
        strcat(final, str);
        format(str, sizeof(str), "\nescolha o nome e essa casa vai se tornar a HQ da facções, podendo gerenciar um cofre com armamentos, salario, drogas, dominar territorios e muito mais");
        strcat(final, str);
        format(str, sizeof(str), "\n\nvocê consegue ver a lista de facções do servidor no site.");
        strcat(final, str);
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "Organizations are divided into 2:");
        strcat(final, str);
        format(str, sizeof(str), "\n\n1- Governmental Corporations, such as LSPD,FBI,SWAT,NATIONAL GUARD,CIA,PARAMEDICS...");
        strcat(final, str);
        format(str, sizeof(str), "\nTo enter an organization, it is enough to have licenses, patents and ports and pass the tests in their departments (/gps)");
        strcat(final, str);
        format(str, sizeof(str), "\n\n2- factions created by players, just buy a house press Y on the door and select the option Create factions");
        strcat(final, str);
        format(str, sizeof(str), "\nchoose the name and this house will become the HQ of the factions, being able to manage a safe with weapons, salary, drugs, dominate territories and much more");
        strcat(final, str);
        format(str, sizeof(str), "\n\nYou can see the server faction list on the website.");
        strcat(final, str);
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "Las organizaciones se dividen en 2:");
        strcat(final, str);
        format(str, sizeof(str), "\n\n1- Corporaciones gubernamentales, como LSPD,FBI,SWAT,NATIONAL GUARD,CIA,PARAMEDICS...");
        strcat(final, str);
        format(str, sizeof(str), "\nPara ingresar a una organización basta con tener licencias, patentes y puertos y pasar las pruebas en sus departamentos (/gps)");
        strcat(final, str);
        format(str, sizeof(str), "\n\n2- facciones creadas por jugadores, solo compre una casa, presione Y en la puerta y seleccione la opción Crear facciones");
        strcat(final, str);
        format(str, sizeof(str), "\nelige el nombre y esta casa se convertirá en el cuartel general de las facciones, pudiendo manejar una caja fuerte con armas, salario, drogas, dominar territorios y mucho más");
        strcat(final, str);
        format(str, sizeof(str), "\n\nPuedes ver la lista de facciones del servidor en el sitio web.");
        strcat(final, str);
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof(str), "Ang Orginisasyon ay hinahati sa dalawa:");
        strcat(final, str);
        format(str, sizeof(str), "\n\n1- Governmental Corporations, tulad ng LSPD,FBI,SWAT,NATIONAL GUARD,CIA,PARAMEDICS...");
        strcat(final, str);
        format(str, sizeof(str), "\nUpang makapasok sa orginisasyon, kinakailangan ng sapat na lisensya, pasensya at i-pasa ang pagsusulit sa bawat departamento (/gps)");
        strcat(final, str);
        format(str, sizeof(str), "\n\n2- Upang makagawa ng Factions, bumili lamang ng bahay at pindutin ang Y sa tapat ng pintuan at piliin ang option Create factions");
        strcat(final, str);
        format(str, sizeof(str), "\npumili ng pangalan at ang bahay na ito ang magiging HQ ng factions, makakaya mong gawing ang weapons, salary, drugs, dominate territories at marami pang iba");
        strcat(final, str);
        format(str, sizeof(str), "\n\nMaari mong tignan ang listahan ng Factions sa website.");
        strcat(final, str);
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"ABOUT ORGS",final,"Ok","");
}
forward MSG_ImpossibleToDM(playerid);
public MSG_ImpossibleToDM(playerid) {
    new str[128], final[1024];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "NÃO POSSÍVEL FAZER DM!");
        strcat(final, str);
        format(str, sizeof(str), "\n\nNenhum jogador consegue te matar sem motivo, se o jogador conseguiu te dar dano só porque você estava em modo de combate, caso contrario o dano seria 0.");
        strcat(final, str);
        format(str, sizeof(str), "\nAs regras do servidor são aplicadas por sistemas do servidor, ação e reação, causa e consequencia.");
        strcat(final, str);
        format(str, sizeof(str), "\n\nPara entender como funciona o Modo Combate & Anti DM, leia o texto do comando: /antidm");
        strcat(final, str);
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "NOT POSSIBLE TO DM!");
        strcat(final, str);
        format(str, sizeof(str), "\n\nNo player can kill you for no reason, if the player managed to damage you just because you were in combat mode, otherwise the damage would be 0.");
        strcat(final, str);
        format(str, sizeof(str), "\nServer rules are enforced by server systems, action and reaction, cause and effect.");
        strcat(final, str);
        format(str, sizeof(str), "\n\nTo understand how Combat Mode and Anti DM works, read the command text: /antidm");
        strcat(final, str);
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "NO ES POSIBLE ENVIAR DM!");
        strcat(final, str);
        format(str, sizeof(str), "\n\nNingún jugador puede matarte sin razón, si el jugador logró dañarte solo porque estabas en modo combate, de lo contrario el daño sería 0.");
        strcat(final, str);
        format(str, sizeof(str), "\nLas reglas del servidor son impuestas por los sistemas del servidor, acción y reacción, causa y efecto.");
        strcat(final, str);
        format(str, sizeof(str), "\n\nPara comprender cómo funcionan el Modo de combate y Anti DM, lea el texto del comando: /antidm");
        strcat(final, str);
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof(str), "HINDI MAARING i-DM!");
        strcat(final, str);
        format(str, sizeof(str), "\n\nWalang manlalaro ang kaya kang patayin ng walang dahilan, kung ang manlalaro ay nakapag bigay ng pinsala sayo sa kadahilanang ikaw ay na sa combat mode,kung hindi man ang pinsala ay magiging 0.");
        strcat(final, str);
        format(str, sizeof(str), "\nAng patakaran ng server at pinapatupad ng server systems, aksyon at reaksyon, sanhi at bunga.");
        strcat(final, str);
        format(str, sizeof(str), "\n\nUpang malaman kung paano gumagana ang Combat Mode at Anti DM, basahin lamang ang command text: /antidm");
        strcat(final, str);
    }
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"IMPOSSIBLE ANTI DM",final,"Ok","");
}
forward MSG_TaskInfoModal(playerid);
public MSG_TaskInfoModal(playerid) {
  new str[100], final[3500];
  format(str, sizeof(str), "--------------- TASK SYSTEM ---------------\n\n");
  strcat(final, str);
  // doing
  if(inTask[playerid] > 0 && inTaskProgress[playerid] < inTaskTotal[playerid]) {
      // criminal
      if(inTask[playerid] == t_roubar_stores) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Roubar Lojas] Faça assaltos a NPCs de empresa (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Robbing Shops] Robbery on company NPCs (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Robo de tiendas] Robo de PNJ de la empresa (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Robbing Shops] Pagnanakaw sa company NPCs (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_roubar_atms) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Roubar Caixas] Faça assaltos a Caixas Eletronicos (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Stealing Boxes] Robbery ATMs (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Robar cajas] Robo de cajeros automáticos (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Stealing Boxes] Pagnanakaw sa ATMs (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_roubar_houses) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Roubar Casas] Faça assaltos a Casas (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Robbing Houses] Raid Houses (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Robar casas] Asaltar casas (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Robbing Houses] Pagnanakaw sa Bahay (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_roubar_partners) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Roubar em Dupla] Faça assaltos em Dupla (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Double Steal] Perform Duo Steals (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Robo doble] Realiza robos a dúo (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Double Steal] Magsagawa ng Dobleng Pagnanakaw (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_roubar_groups) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Roubar em Grupo] Faça assaltos em Grupo (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Group Steal] Make Group Heists (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Robo de grupo] Realizar atracos en grupo (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Group Steal] Magsagawa ng Grupong Pagnanakaw (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_roubar_warehouse) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Roubar em Armazem] Faça assaltos em Armazem (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Storage Steal] Make Warehouse Heists (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Robo de almacenamiento] Realizar atracos al almacén (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Storage Steal] Magnakaw sa Warehouse (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      // cop
      else if(inTask[playerid] == t_entregar_transport_bags) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Entregar Bolsas de Dinheiro de Caixa Eletronico] Faça entregas de Bolsas de Dinheiro de Caixas Eletronico (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Deliver ATM Money Bags] Deliver ATM Money Bags (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Entregar bolsas de dinero en cajero automático] Entregar bolsas de dinero en cajero automático (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Deliver ATM Money Bags] Mag Deliver ng ATM Money Bags (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_prender_jogadores_procurados) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Prender Procurados] Prenda jogadores procurados (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Arrest Wanted] Arrest wanted players (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Arresto Buscado] Arresto de jugadores buscados (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Arrest Wanted] Arrestohin ang mga wanted (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_fazer_abordagens) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Abordagem] Faça abordagens policiais (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Approach] Make police approaches (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Aproximación] Hacer aproximaciones policiales (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Approach] Gawin ang tama bilang pulis (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_retornar_moveis_roubados) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Devolver Mobilia] Devolva moveis roubados para suas respectivas casas (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Return Furniture] Return stolen furniture to their respective homes (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Devolver Muebles] Devolver los muebles robados a sus respectivos hogares (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Ibalik ang Gamit] Ibalik ang Gamit sa kanilang respetadong Bahay (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        
      }
      else if(inTask[playerid] == t_encontrar_culpados_de_assassinatos) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Investigar Assassinatos] Encontre os assassinos de cadaveres (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Investigate Murders] Find the corpse killers (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Investigar asesinatos] Encuentra a los asesinos de cadáveres (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Imbestigahan ang Pagpatay] Hanapin Ang Pumatay (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_closeoperation) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Close Bizz] Feche as portas de empresas ilegais/gangzones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Close Bizz] Close the doors of illegal companies/gangzones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Close Bizz] Cierra las puertas de empresas ilegales/gangzones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Close Bizz] Isarado ang pinto ng mga illegal companies/gangzones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_seizureoperation) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Operações Policial] Faça operações policiais em Casas/Factions HQ (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Police Operations] Perform police operations in Houses/Factions HQ (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Operaciones policiales] Realiza operaciones policiales en el cuartel general de casas/facciones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Police Operations] Magsagawa ng operasyon sa mga Bahay /Factions HQ (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      // civilian
      else if(inTask[playerid] == t_voltas_de_busao) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Etinerario - Motorista de Onibus] Complete as voltas do etinerario do emprego Motorista de Onibus (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Itinerary - Bus Driver] Complete the routes for the Bus Driver (%i/%i) job", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Itinerario - Conductor de autobús] Complete las rutas para el trabajo de Conductor de autobús (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Itinerary - Bus Driver] Kompletuhin ang ruta para sa Driver ng Bus (%i/%i) job", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_entregar_pizzas) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Entregas - Motoboy] Complete as voltas entregas do emprego Motoboy (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Deliveries - Motoboy] Complete the delivery laps of the Motoboy job (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Entregas - Motoboy] Completa las vueltas de entrega del trabajo Motoboy (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Deliveries - Motoboy] Kumpletuhin ang delivery laps sa Motoboy job (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_pescar_peixes) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Pescaria - Pescador] Faça pescas no mar (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Fishing - Fisherman] Go fishing in the sea (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Pesca - Pescador] Ve a pescar al mar (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Fishing - Fisherman] Pumunta at Mangisda sa Dagat (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_consertar_carros) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Consertar - Mecanico] Conserte veiculos danificados (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Repair - Mechanic] Repair damaged vehicles (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Reparación - Mecánico] Reparación de vehículos dañados (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Repair - Mechanic] Ayusin ang sira na kotse (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_soltar_presos) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Libertar Presos - Advogado] Solte presos (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Release Prisoners - Lawyer] Release prisoners (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Liberar presos - Abogado] Liberar presos (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Release Prisoners - Lawyer] Palayain ang mga Preso (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_fazer_viagens_aereas) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Viagens Aereas - Piloto] Complete viagens aereas entre aeroportos (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Air Travel - Pilot] Complete air travel between airports (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Viaje aéreo - Piloto] Viaje aéreo completo entre aeropuertos (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Air Travel - Pilot] Kumpletuhin ang air travel sa pagitan ng mga paliparan (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
    //   else if(inTask[playerid] == t_fazer_uma_viagem_de_trem) {
    //       format(str, sizeof(str), "[Viagens Ferrovia - Maquinista] Complete as voltas do etinerario do emprego Maquinista (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
    //   }
      else if(inTask[playerid] == t_entregar_cargas_bizzprod) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Entrega de Produtos - Caminhoneiro] Faça entrega de produtos nas empresas (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Product Delivery - Truck Driver] Deliver products to companies (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Entrega de productos - Camionero] Entregar productos a empresas (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Product Delivery - Truck Driver] Mag deliver ng mga produkto sa mga kompanya(%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_vender_pedras_mineradas) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Vender Pedras Mineradas - Minerador] Minere pedras na mina e venda as pedras (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Sell Mined Stones - Miner] Mine stones in the mine and sell the stones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Vender piedras extraídas - Minero] Extraer piedras en la mina y vender las piedras (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Sell Mined Stones - Miner] Magmina ng mga Bato at Ibenta (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      else if(inTask[playerid] == t_desmanchar_veiculos) {
        if(idiom[playerid] == 1) format(str, sizeof(str), "[Desmanchar Veiculos - Ladrão de Veiculos] Minere pedras na mina e venda as pedras (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 2) format(str, sizeof(str), "[Dismantle Vehicles - Vehicle Thief] Mine stones in the mine and sell the stones (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 3) format(str, sizeof(str), "[Desmontar vehículos - Ladrón de vehículos] Extraer piedras en la mina y vender las piedras (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
        else if(idiom[playerid] == 4) format(str, sizeof(str), "[Dismantle Vehicles - Vehicle Thief] Chopchopin ang kotse (%i/%i)", inTaskProgress[playerid], inTaskTotal[playerid]);
      }
      strcat(final, str);
      if(idiom[playerid] == 1) format(str, sizeof(str), "\n\n/canceltask para cancelar esta tarefa.");
      else if(idiom[playerid] == 2) format(str, sizeof(str), "\n\n/canceltask to cancel this task.");
      else if(idiom[playerid] == 3) format(str, sizeof(str), "\n\n/canceltask para cancelar esta tarea.");
      else if(idiom[playerid] == 4) format(str, sizeof(str), "\n\n/canceltask para ma kansela ang gawain.");
      strcat(final, str);
  }
  // finish
  else if(inTask[playerid] > 0 && inTaskProgress[playerid] >= inTaskTotal[playerid]) {
    if(idiom[playerid] == 1) format(str, sizeof(str), "Parabens\nvocê finalizou sua Task, vá até a prefeitura para pegar sua recompensa.");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "Congratulations\nyou finished your Task, go to the town hall to get your reward.");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Felicitaciones\nterminaste tu tarea, ve al ayuntamiento para obtener tu recompensa.");
    else if(idiom[playerid] == 4) format(str, sizeof(str), "Binabati kita\nnatapos mo ang iyong gawain, pumunta sa town hall para makuha ang reward.");
    strcat(final, str);
  }
  // starting
  else {
    if(idiom[playerid] == 1) format(str, sizeof(str), "Você não está fazendo nenhuma Task, vá até a prefeitura para pegar uma Task.");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You are not doing any Tasks, go to the Town Hall to get a Task.");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "No estás haciendo ninguna Tarea, ve al Ayuntamiento para obtener una Tarea.");
    else if(idiom[playerid] == 4) format(str, sizeof(str), "Kung Wala kang ginagawa, pumunta sa Town Hall at kumuha ng gawain.");
    strcat(final, str);
  }
  // EXAUSTED:
  if(inTaskExausted[playerid]-gettime() > 0) {
      new auxStr[120];
      ConvertTime(auxStr, inTaskExausted[playerid] - gettime());
      format(str, sizeof(str), "\n\nExausted time: %s", auxStr);
      strcat(final, str);
  }
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Task Info:",final,"Ok","");
}
forward MSG_AntiDmQuestionsDialog(playerid);
public MSG_AntiDmQuestionsDialog(playerid) {
  new str[512];
  if(antidmQuestions[playerid] == 1) {
      if(idiom[playerid] == 1) {
          format(str, sizeof(str), "Quando eu posso atacar outro jogador?\n- Quando player-alvo estiver em modo FIGHT a tag [FIGHT] cinza em cima da cabeça\n- Quando player-alvo estivar em modo SAFE com a tag [SAFE] verde em cima da cebeï¿½a\n- Quando player-alvo estiver em modo PAUSE com a tag [PAUSE] em cima da cabeça");
      }
      else if(idiom[playerid] == 2) {
          format(str, sizeof(str), "When can I attack another player?\n- When the target player is in FIGHT mode, the gray [FIGHT] tag above the head\n- When the target player is in SAFE mode with the green [SAFE] tag on top of the head\n- When the target player is in PAUSE mode with the [PAUSE] tag on top of the head ");
      }
      else if(idiom[playerid] == 3) {
          format(str, sizeof(str), "¡Cuï¿½ndo puedo atacar a otro jugador?\n- Cuando el jugador objetivo está en modo FIGHT etiqueta gris [FIGHT] en la parte superior de la cabeza\n- Cuando el jugador objetivo está en modo SAFE con la etiqueta verde [SAFE] en la parte superior de la cabeza -a\n - Cuando el jugador objetivo está en modo PAUSA con la etiqueta [PAUSA] en la parte superior de la cabeza");
      }
      else if(idiom[playerid] == 4) {
          format(str, sizeof(str), "Kailan ako pwedeng umatake?\n- Kapag ang player ay naka FIGHT mode, kulay gray [FIGHT] na tag sa taas ng ulo\n- Kapag ang player ay naka SAFE mode kulay berde na [SAFE] na tag sa taas ng ulo\n- Kapag ang player ay naka PAUSE mode [PAUSE] na tag sa taas ng ulo ");
      }
      ShowPlayerDialog(playerid, 436, DIALOG_STYLE_LIST, "ANTI DM QUESTION 1", str, "Select", "");
  }
  else if(antidmQuestions[playerid] == 2) {
      if(idiom[playerid] == 1) {
          format(str, sizeof(str), "Se eu quiser um local protegido (sem PVP) para conversar e negociar onde devo ir?\n- Quadrado vermelhos do mapa, usando Y - GPS - GangZones\n- Quadrados verdes do mapa, usando Y - GPS - SafeZones\n- Fazendas, usando Y - GPS - Fazenda");
      }
      else if(idiom[playerid] == 2) {
          format(str, sizeof(str), "If I want a protected place (without PVP) to talk and negotiate where should I go?\n- Red squares of the map, using Y - GPS - GangZones\n- Green squares of the map, using Y - GPS - SafeZones\n- Farms, using Y - GPS - Farm");
      }
      else if(idiom[playerid] == 3) {
          format(str, sizeof(str), "Si quiero un lugar seguro (sin PVP) para hablar e intercambiar, ï¿½dï¿½nde debo ir?\n- Cuadrados rojos en el mapa, usando Y - GPS - GangZones\n- Cuadrados verdes en el mapa, usando Y - GPS - SafeZones\n- Granjas, usando Y - GPS - Granja");
      }
      else if(idiom[playerid] == 4) {
          format(str, sizeof(str), "Kapag gusto ko sa safe na lugar (walang PVP) para kumausap at makipag negosasyon saan ako pupunta??\n- Red squares na makikita sa mapa, gamitin ang Y - GPS - GangZones\n- Green squares of th, gamitin ang Y - GPS - SafeZones\n- Farms, gamitin ang Y - GPS - Farm");
      }
      ShowPlayerDialog(playerid, 436, DIALOG_STYLE_LIST, "ANTI DM QUESTION 2", str, "Select", "");
  }
  else if(antidmQuestions[playerid] == 3) {
      if(idiom[playerid] == 1) {
          format(str, sizeof(str), "Quando policiais podem me matar?\n- Se eu estiver com nível de procurado apenas\n- Se eu estiver com nível de procurado e FIGHT\n- Se eu estiver armado apenas.");
      }
      else if(idiom[playerid] == 2) {
          format(str, sizeof(str), "When can cops kill me?\n- If I'm only wanted\n- If I have a wanted level and FIGHT\n- If I'm just armed");
      }
      else if(idiom[playerid] == 3) {
          format(str, sizeof(str), "¡Cuï¿½ndo pueden matarme los policï¿½as?\n- Si solo soy buscado\n- Si solo soy buscado y LUCHAR\n- Si solo estoy armado.");
      }
      else if(idiom[playerid] == 4) {
          format(str, sizeof(str), "Kailan ako pwedeng patayin ng pulis?\n- Kapag ako ay wanted lamang\n- kapag ako ay may wanted level at naka FIGHT mode\n- Kapag ako ay armado lamang");
      }
      ShowPlayerDialog(playerid, 436, DIALOG_STYLE_LIST, "ANTI DM QUESTION 3", str, "Select", "");
  }
  else if(antidmQuestions[playerid] == 4) {
      if(idiom[playerid] == 1) {
          format(str, sizeof(str), "Assinale a opï¿½ï¿½o errada:\n- Policiais podem atirar em rodas de veiculos em perseguiï¿½ï¿½o mesmo sem FIGHT\n- Criminosos podem destruir veiculos de outros jogadores para fazer um assalto mesmo sem FIGHT\n- Eu posso matar um jogador apenas por me ofender");
      }
      else if(idiom[playerid] == 2) {
          format(str, sizeof(str), "Tick the only wrong option:\n- Police officers can shoot vehicle wheels in pursuits even without FIGHT\n- Criminals can destroy other players' vehicles to make an assault even without FIGHT\n- I can kill a player just for offending me ");
      }
      else if(idiom[playerid] == 3) {
          format(str, sizeof(str), "Marque las opciones incorrectas:\n- Los policï¿½as pueden disparar ruedas de vehículos en persecuciï¿½n incluso sin PELEAR\n- Los delincuentes pueden destruir los vehículos de otros jugadores para robar incluso sin PELEAR\n- Puedo matar a un jugador solo por ofenderme");
      }
      else if(idiom[playerid] == 4) {
          format(str, sizeof(str), "Piliin ang maling sagot:\n- Ang Police officers ay pwedeng barilin ang gulong ng ano mang sasakyan kahit hindi ito naka-FIGHT mode\n- Ang mga Kriminal ay pwedeng manira ng sasakyan ng ibang player kahit hindi ito naka-FIGHT mode\n- Maari kong patayin ang player dahil ito ang gusto ko ");
      }
      ShowPlayerDialog(playerid, 436, DIALOG_STYLE_LIST, "ANTI DM QUESTION 4", str, "Select", "");
  }
  else if(antidmQuestions[playerid] >= 5) {
      if(mission[playerid] == mts_AntiDMSystem) MissionComplete(playerid, mission[playerid]);
      antidmQuestions[playerid] = 0;
  }
}
forward MSG_BuyLotteryTicketDialog(playerid);
public MSG_BuyLotteryTicketDialog(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Coloque aqui o nï¿½mero do ticket que você quer comprar:");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"Enter the ticket number you want to buy here:");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"Introduce el nï¿½mero de billete que quieres comprar aquï¿½:");
   else if(idiom[playerid] == 4) format(str,sizeof(str),"Ilagay ang ticket number na gusto mong bilhin:");
  ShowPlayerDialog(playerid, 363, DIALOG_STYLE_INPUT, "Loterry Menu", str, "Buy", "Cancel");
}
forward MSG_DeliveringWinningTicket(playerid, value);
public MSG_DeliveringWinningTicket(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Parabeńs!!! você entregou o bilhete premiado e recebeu %i$", value);
  else if(idiom[playerid] == 2) format(str,sizeof(str),"Congratulations!!! You delivered the winning ticket and received %i$", value);
  else if(idiom[playerid] == 3) format(str,sizeof(str),"¡¡¡Feliz cumpleaños!!! entregaste el boleto ganador y recibiste %i$", value);
  else if(idiom[playerid] == 4) format(str,sizeof(str),"Congratulations!!! Nanalo ang napili mong ticket at ikaw ay makakatanggap ng %i$", value);
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_BizzCloseExausted(playerid, etime);
public MSG_BizzCloseExausted(playerid, etime) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você só pode fazer uma BIZZ CLOSE OPERATION de %i em %i minutos, por favor aguarde!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You can only make a BIZZ CLOSE OPERATION %i in %i minutes, please wait!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Solo puede realizar una OPERACIï¿½N DE CIERRE DE BIZZ de %i en %i minutos, ï¿½espere!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Pwede ka lamang mag BIZZ CLOSE OPERATION %i sa loob ng %i minutos, maaring maghintay!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
}
forward MSG_GzCloseExausted(playerid, etime);
public MSG_GzCloseExausted(playerid, etime) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você só pode fazer uma GZ CLOSE OPERATION de %i em %i minutos, por favor aguarde!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You can only make a GZ CLOSE OPERATION %i in %i minutes, please wait!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Solo puede hacer una OPERACIï¿½N DE CIERRE GZ de %i en %i minutos, ï¿½espere!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Pwede ka lamang mag GZ CLOSE OPERATION %i sa loob %i minutos, maaring maghintay!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
}
forward MSG_HouseSeizureExausted(playerid, etime);
public MSG_HouseSeizureExausted(playerid, etime) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você só pode fazer uma GZ CLOSE OPERATION de %i em %i minutos, por favor aguarde!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You can only make a GZ CLOSE OPERATION %i in %i minutes, please wait!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Solo puede hacer una OPERACIï¿½N DE CIERRE GZ de %i en %i minutos, ï¿½espere!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Pwede ka lamang mag GZ CLOSE OPERATION %i sa loob ng %i minutos, maaring maghintay!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
}
forward MSG_HqSeizureExausted(playerid, etime);
public MSG_HqSeizureExausted(playerid, etime) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você só pode fazer uma GZ CLOSE OPERATION de %i em %i minutos, por favor aguarde!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You can only make a GZ CLOSE OPERATION %i in %i minutes, please wait!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Solo puede hacer una OPERACIï¿½N DE CIERRE GZ de %i en %i minutos, ï¿½espere!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Pwede ka lamang mag GZ CLOSE OPERATION %i sa loob ng %i minutos, maaring maghintay!", etime, etime);
      SendClientMessage(playerid, COLOR_GREY, str);
  }
}
forward MSG_PlayerExaustedNpcBizzRob(playerid, etime);
public MSG_PlayerExaustedNpcBizzRob(playerid, etime) {
    new string[128];
    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Você só pode roubar um NPC de %i em %i minutos, por favor aguarde!", etime, etime);
        SendClientMessage(playerid, COLOR_GREY, string);
    }
    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "You can only steal a %i in %i minutes NPC, please wait!", etime, etime);
        SendClientMessage(playerid, COLOR_GREY, string);
    }
    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Solo puedes robar un NPC de %i en %i minutos, ï¿½espera!", etime, etime);
        SendClientMessage(playerid, COLOR_GREY, string);
    }
    else if(idiom[playerid] == 4) {
        format(string, sizeof(string), "Pwede mong nakawan ang %i sa loob ng %i minuto NPC, maaring maghintay!", etime, etime);
        SendClientMessage(playerid, COLOR_GREY, string);
    }
}
forward MSG_BizzExaustedNpcBizzRob(playerid);
public MSG_BizzExaustedNpcBizzRob(playerid) {
    new string[128];
    if(idiom[playerid] == 1) format(string, sizeof(string), "Este NPC foi roubado recentemente! Espere alguns minutos para rouba-lo novamente!" );
    else if(idiom[playerid] == 2) format(string, sizeof(string), "This NPC was robbed recent! Wait some minutes to steal it again!" );
    else if(idiom[playerid] == 3) format(string, sizeof(string), "¡Este NPC fue robado recientemente! ï¿½Espera unos minutos para volver a robarlo!" );
    else if(idiom[playerid] == 4) format(string, sizeof(string), "Ang NPC na ito ay nanakawan na! Maghintay lamang ng ilang minuto upang ito ay manakawang muli!" );
    SendClientMessage(playerid, COLOR_LIGHTRED, string);
}
forward MSG_TryToRobSameLastNpcBizz(playerid);
public MSG_TryToRobSameLastNpcBizz(playerid) {
    if(idiom[playerid] == 1) { SendClientMessage(playerid, -1, "Você não pode roubar a mesma loja!"); }
    else if(idiom[playerid] == 2) { SendClientMessage(playerid, -1, "You can't rob the SAME store!"); }
    else if(idiom[playerid] == 3) { SendClientMessage(playerid, -1, "¡No puedes robar en la misma tienda!"); }
    else if(idiom[playerid] == 4) { SendClientMessage(playerid, -1, "Hindi mo pwedeng nakawan ang PAREHONG tindahan na iyong pinagnakawan!"); }
}
forward MSG_NeedCopsAroundToDoOperation(playerid, num);
public MSG_NeedCopsAroundToDoOperation(playerid, num) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você precisa de %i policiais para iniciar esse tipo de operação Policial", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You need %i policemen to start this type of Police Operation", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Necesitas %i policï¿½as para iniciar este tipo de Operaciï¿½n Policial", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Kinakailangan mo ng %i pulisya upang simulan ang Police Operation", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
}
forward MSG_NeedCriminalsAroundToCmd(playerid, num);
public MSG_NeedCriminalsAroundToCmd(playerid, num) {
  new str[128];
  if(idiom[playerid] == 1) {
    format(str, sizeof(str), "são necessï¿½rios %i criminosos para usar esse comando!", num+1 );
    SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "It takes %i criminals to use this command!", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "¡Se necesitan %i delincuentes para usar este comando!", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Ito ay kailangan ng %i criminals upang magamit ang command na ito!", num+1 );
      SendClientMessage(playerid, COLOR_GREY, str);
  }
}
forward MSG_VeteranJob(playerid);
public MSG_VeteranJob(playerid) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Jogadores novatos não podem entrar nesse Emprego!");
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "Novice players cannot enter this Job!");
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "¡Los jugadores novatos no pueden ingresar a este trabajo!");
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Ang baguhang players ay hindi makakapasok sa trabahong ito!");
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_VeteranCommand(playerid);
public MSG_VeteranCommand(playerid) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Jogadores novatos não podem usar esse comando!");
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "Novice players cannot use this command!");
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "¡Los jugadores novatos no pueden usar este comando!");
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Ang baguhang players ay hindi pwedeng gamitin ang command na ito!");
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_InfoBonusMoneyBusDriver(playerid);
public MSG_InfoBonusMoneyBusDriver(playerid) {
  new str[80];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Tire a Licença C (Onibus) para receber mais dinheiro com esse emprego, vá até o Centro de Licenças tira-la (/gps)!");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"Get License C (Onibus) to receive more money with this job, go to the License Center to get it (/gps)!");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"¡Obtén la Licencia C (Onibus) para recibir más dinero con este trabajo, ve al Centro de Licencias para obtenerla (/gps)!");
  else if(idiom[playerid] == 4) format(str,sizeof(str),"Kumuha ng License C (Onibus) upang makatangap ng mas-malaking pera sa trabahong ito, pumunta lamang sa License Center upang makakuha nito (/gps)!");
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Need Ground License C",str,"Ok","");
  SendClientMessage(playerid, -1, str);
}
forward MSG_InfoBonusMoneyMotoboy(playerid);
public MSG_InfoBonusMoneyMotoboy(playerid) {
  new str[80];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Tire a Licença A (Moto) para receber mais dinheiro com esse emprego, vá até o Centro de Licenças tira-la (/gps)!");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"Get License A (Motorcycle) to receive more money with this job, go to the License Center to get it (/gps)!");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"Obtenga la Licencia A (Motocicleta) para recibir más dinero con este trabajo, vaya al Centro de Licencias para obtenerla (/gps)!");
  else if(idiom[playerid] == 4) format(str,sizeof(str),"Kumuha ng License A (Motorcycle) upang makatangap ng mas-malaking pera sa trabahong ito, pumunta lamang sa License Center upang makakuha nito (/gps)!");
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Need Ground License A",str,"Ok","");
  SendClientMessage(playerid, -1, str);
}
forward MSG_InfoHowToWork_Pirate(playerid);
public MSG_InfoHowToWork_Pirate(playerid) {
  new str[80];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Alugue um barco e fique no mar para Caça Tesouros e Rouba Materiais de Navios Militares!");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"Rent a boat and stay at sea to Hunt Treasure and Steal Materials from Military Ships!");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"¡Alquile un barco y quédese en el mar para cazar tesoros y robar materiales de barcos militares!");
  else if(idiom[playerid] == 4) format(str,sizeof(str),"Mag renta ng bangka at manatili sa dagat upang mag Hunt Treasure at kunin ang materyales sa Military Ships!");
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"HowToWork Pirate",str,"Ok","");
  SendClientMessage(playerid, -1, str);
}
forward MSG_NeedLicenseDorEtoWork(playerid);
public MSG_NeedLicenseDorEtoWork(playerid) {
  new str[80];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Você não tem Licença D/E para dirigir um caminhão, vá até o Centro de Licenças tira-la (/gps)!");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"You don't have a D/E License to drive a truck, go to the License Center to get it (/gps)!");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"¡No tienes Licencia D/E para conducir un camión, ve al Centro de Licencias para obtenerla (/gps)!");
  else if(idiom[playerid] == 4) format(str,sizeof(str),"Ikaw ay wala pang D/E License upang magmaniho ng truck, pumunta lamang sa License Center at kumuha nito (/gps)!");
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Need Ground License D or E",str,"Ok","");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_YouAreNotIn_A_VehicleName(playerid, vehid);
public MSG_YouAreNotIn_A_VehicleName(playerid, vehid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "Você não está em um veiculo do modelo: %s", getVehicleName(vehid) );
  else if(idiom[playerid] == 2) format(str, sizeof(str), "You are not in a model vehicle: %s", getVehicleName(vehid) );
  else if(idiom[playerid] == 3) format(str, sizeof(str), "No estás en un modelo de vehículo: %s", getVehicleName(vehid) );
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Ikaw ay wala sa model vehicle na ito: %s", getVehicleName(vehid) );
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_MotoboyReturnToBizzHiredYou(playerid);
public MSG_MotoboyReturnToBizzHiredYou(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Retorne até a empresa que te contratou para receber seu dinheiro e mais entregas!");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Return to the company that hired you to receive your money and more deliveries!");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "¡Regresa a la empresa que te contrató para recibir tu dinero y más entregas!");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Bumalik sa kompanya na nag hired sayo upang matanggap mo ang iyong pera at mas maraming deliveries!");
  
}
forward MSG_MotoboyEntrega(playerid, value);
public MSG_MotoboyEntrega(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "+%i$! Bom trabalho! Agora vá entregar o outro pedido!", value );
  else if(idiom[playerid] == 2) format(str, sizeof(str), "+%i$! Good work! Now go deliver the other order!", value );
  else if(idiom[playerid] == 3) format(str, sizeof(str), "+%i$! ¡Buen trabajo! ¡Ahora ve a entregar el otro pedido!", value );
  else if(idiom[playerid] == 4) format(str, sizeof(str), "+%i$! Good work! Ngayon i-deliver na ang ibang order!", value );
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  if(lcTerrestre[playerid] < 1) {
    if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Tire a Licença A (Moto) para receber mais dinheiro, vá até o Centro de Licenças tira-la (/gps)!");
    else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Get License A (Motorcycle) to receive more money, go to the License Center to get it (/gps)!");
    else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Obtenga la Licencia A (Motocicleta) para recibir más dinero, vaya al Centro de Licencias para obtenerla (/gps)!");
    else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Kumuha ng License A (Motorcycle) upang makatanggap ng mas-maraming pera, pumunta lamang sa License Center upang kumuha nito (/gps)!");
  }
}
forward MSG_BusDriverTerminal(playerid, value);
public MSG_BusDriverTerminal(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "+%i$! Bom trabalho! Agora vá entregar o outro pedido!", value );
  else if(idiom[playerid] == 2) format(str, sizeof(str), "+%i$! Good work! Now go to other bus station to get a passenger!", value );
  else if(idiom[playerid] == 3) format(str, sizeof(str), "+%i$! ¡Buen trabajo! ¡Ahora ve a entregar el otro pedido!", value );
  else if(idiom[playerid] == 4) format(str, sizeof(str), "+%i$! Good work! Ngayon pumunta sa ibang stasyon ng bus upang kumuha ng pasahero!", value );
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  if(lcTerrestre[playerid] < 1) {
    if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Tire a Licença A (Moto) para receber mais dinheiro, vá até o Centro de Licenças tira-la (/gps)!");
    else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Get License A (Motorcycle) to receive more money, go to the License Center to get it (/gps)!");
    else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Obtenga la Licencia A (Motocicleta) para recibir más dinero, vaya al Centro de Licencias para obtenerla (/gps)!");
    else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Kumuha ng License A (Motorcycle) upang makatanggap ng mas-maraming pera, pumunta lamang sa License Center upang kumuha nito (/gps)!");
  }
}
forward MSG_BusStopTen(playerid, value);
public MSG_BusStopTen(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "Você terminou uma linha da rota! +%i$.", value );
  else if(idiom[playerid] == 2) format(str, sizeof(str), "You have completed a route line! +%i$", value );
  else if(idiom[playerid] == 3) format(str, sizeof(str), "¡Has completado una línea de ruta! +%i$", value );
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Na-kompleto mo na ang linya ng ruta! +%i$", value );
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  if(lcTerrestre[playerid] < 3) {
    if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Tire a Licença C (Bus) para receber mais dinheiro, vá até o Centro de Licenças tira-la!");
    else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Get C (Bus) License to get more money, go to License Center to get it!");
    else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "¡Obtenga la licencia C (autobús) para obtener más dinero, vaya al Centro de licencias para obtenerla!");
    else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Kumuha ng C (Bus) License upang makakuha ng mas-maraming pera, pumunta lamang sa License Center upang kumuha nito!");
  }
}
forward MSG_NoWormsToFish(playerid);
public MSG_NoWormsToFish(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_GREY, "Você não tem iscas para pesca compre em uma 24/7 (/gps e /comprar)");
        SendClientMessage(playerid, COLOR_RED, "Foi marcado no seu mapa um checkpoint com a 24-7 mais perto.");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_GREY, "You don't have any fishing lures buy from a 24/7 (/gps and /buy)");
        SendClientMessage(playerid, COLOR_RED, "A checkpoint with the nearest 24-7 has been marked on your map.");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_GREY, "No tienes señuelos de pesca comprar de un 24/7 (/gps y /buy)");
        SendClientMessage(playerid, COLOR_RED, "Se ha marcado un punto de control con el 24-7 más cercano en su mapa.");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_GREY, "Ikaw ay walang kahit anong fishing lures bumili lamang sa 24/7 (/gps and /buy)");
        SendClientMessage(playerid, COLOR_RED, "Ang checkpoint na pinakamalapit na 24-7 ay naka-marka na sa iyong mapa.");
    }
}
forward MSG_NoFishingRod(playerid);
public MSG_NoFishingRod(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_GREY, "Você não tem vara para pesca compre em uma 24/7 (/gps e /comprar)");
        SendClientMessage(playerid, COLOR_RED, "Foi marcado no seu mapa um checkpoint com a 24-7 mais perto.");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_GREY, "You don't have a fishing rod buy it from a 24/7 (/gps and /buy)");
        SendClientMessage(playerid, COLOR_RED, "A checkpoint with the nearest 24-7 has been marked on your map.");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_GREY, "No tienes caña de pescar cómprala en un 24/7 (/gps y /buy)");
        SendClientMessage(playerid, COLOR_RED, "Se ha marcado un punto de control con el 24-7 más cercano en su mapa.");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_GREY, "Ikaw ay walang kahit anong fishing rod bumili lamang sa 24/7 (/gps and /buy)");
        SendClientMessage(playerid, COLOR_RED, "Ang checkpoint na pinakamalapit na 24-7 ay naka-marka na sa iyong mapa.");
    }
}
forward MSG_YouAreNotOnWater(playerid);
public MSG_YouAreNotOnWater(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_GREY, "Você não está na água.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_GREY, "You are not in the sea.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_GREY, "No estás en el agua.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_GREY, "Ikaw ay wala sa dagat");
}
forward MSG_YouAreNotSurfingABoat(playerid);
public MSG_YouAreNotSurfingABoat(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_GREY, "Você precisa estar surfando em um barco para usar esse comando.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_GREY, "You need to be surfing a boat to use this command.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_GREY, "Necesitas estar navegando en un bote para usar este comando.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_GREY, "Kinakailangan na ikaw ay nasa bangka upang magamit ang command na ito.");
}
forward MSG_YouCantBeSwimming(playerid);
public MSG_YouCantBeSwimming(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_GREY, "Você não pode estar nadando para usar esse comando.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_GREY, "You cannot be swimming to use this command.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_GREY, "No puedes estar nadando para usar este comando.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_GREY, "Hindi ka pwedeng lumangoy upang magamit at command na ito.");
}
forward MSG_CantBeInVehicle(playerid);
public MSG_CantBeInVehicle(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_GREY, "Você não pode usar esse comando em um Veiculo.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_GREY, "You cannot use this command on a Vehicle.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_GREY, "No puede usar este comando en un vehículo.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_GREY, "Hindi mo maaaring gamitin ang command na ito sa isang Sasakyan.");
}
forward MSG_YouAlreadyFishing(playerid);
public MSG_YouAlreadyFishing(playerid) {
  if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_GREY, "Você já está pescando aguarde terminar.");
  else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_GREY, "You are already fishing wait to finish.");
  else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_GREY, "Ya estás pescando espera a terminar.");
  else if(idiom[playerid] == 4) SendClientMessage(playerid, COLOR_GREY, "Ikaw ay nanghuhuli na ng isda maghintay upang matapos.");
}
forward MSG_OnFishTrash(playerid, tipopesca);
public MSG_OnFishTrash(playerid, tipopesca) {
  new str[128];
  new trashText[20];
  if(tipopesca == 1) {
    if(idiom[playerid] == 1) trashText = "Casaco";
    else if(idiom[playerid] == 2) trashText = "Coat";
    else if(idiom[playerid] == 3) trashText = "Saco";
    else if(idiom[playerid] == 4) trashText = "Coat";
  }
  else if(tipopesca == 2) {
    if(idiom[playerid] == 1) trashText = "Calcinha";
    else if(idiom[playerid] == 2) trashText = "Panty";
    else if(idiom[playerid] == 3) trashText = "Bragas";
    else if(idiom[playerid] == 4) trashText = "Panty";
  }
  else if(tipopesca == 3) {
    if(idiom[playerid] == 1) trashText = "Calcinha";
    else if(idiom[playerid] == 2) trashText = "Panty";
    else if(idiom[playerid] == 3) trashText = "Bragas";
    else if(idiom[playerid] == 4) trashText = "Panty";
  }
  else if(tipopesca == 4) {
    if(idiom[playerid] == 1) trashText = "Sunga";
    else if(idiom[playerid] == 2) trashText = "Trunks";
    else if(idiom[playerid] == 3) trashText = "Bañador";
    else if(idiom[playerid] == 4) trashText = "Trunks";
  }
  else if(tipopesca == 5) {
    if(idiom[playerid] == 1) trashText = "Bota";
    else if(idiom[playerid] == 2) trashText = "Boot";
    else if(idiom[playerid] == 3) trashText = "Bota";
    else if(idiom[playerid] == 4) trashText = "Boot";
  }
  if(idiom[playerid] == 1) format(str, sizeof str, "Você pegou 1 %s e o jogou fora!", trashText);
  else if(idiom[playerid] == 2) format(str, sizeof str, "You took 1 %s and threw it away!", trashText);
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡Tomaste 1 %s y lo tiraste!", trashText);
  else if(idiom[playerid] == 4) format(str, sizeof str, "Kinuha mo ay 1 %s at itapon ito!", trashText);
  SendClientMessage(playerid, COLOR_GREY, str);
}
forward MSG_OnFishMoney(playerid, value);
public MSG_OnFishMoney(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "* você pegou uma carteira,contendo %d$", value);
  else if(idiom[playerid] == 2) format(str, sizeof(str), "* you took a wallet, containing %d$", value);
  else if(idiom[playerid] == 3) format(str, sizeof(str), "* tomaste una billetera que contenía %d$", value);
  else if(idiom[playerid] == 4) format(str, sizeof(str), "* kinuha mo ang isang wallet, na naglalaman ng %d$", value);
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_OnFishFISH(playerid, peixe_pescado, Caught);
public MSG_OnFishFISH(playerid, peixe_pescado, Caught) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "* Voce pescou [%s], pesando: [%d] Lbs.", GetItemName(peixe_pescado, Caught, idiom[playerid]), Caught);
  else if(idiom[playerid] == 2) format(str, sizeof(str), "* You caught [%s], weighing: [%d] Lbs.", GetItemName(peixe_pescado, Caught, idiom[playerid]), Caught);
  else if(idiom[playerid] == 3) format(str, sizeof(str), "* Capturaste [%s], pesando: [%d] Lbs.", GetItemName(peixe_pescado, Caught, idiom[playerid]), Caught);
  else if(idiom[playerid] == 4) format(str, sizeof(str), "* Nahuli mo na ang [%s], na tumitimbang ng: [%d] Lbs.", GetItemName(peixe_pescado, Caught, idiom[playerid]), Caught);
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_PernaQuebradaMessage(playerid);
public MSG_PernaQuebradaMessage(playerid) {
    if(idiom[playerid] == 1) { SendClientMessage(playerid, COLOR_LIGHTRED, "Suas pernas estáo quebradas! Compre uma Morphine no hospital (/gps) ou procure um Medico!" ); }
    else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_LIGHTRED, "Your legs are broken! Buy a Morphine at the hospital (/gps) or look for a Doctor!" ); }
    else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_LIGHTRED, "¡Tus piernas están rotas! ï¿½Compra una Morfina en el hospital (/gps) o busca un Doctor!" ); }
    else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_LIGHTRED, "Ang iyong mga binti ay nasira! Bumili ng isang Morphine sa ospital (/gps) o maghanap ng Doktor!" ); }
    return 1;
}
forward MSG_InputMinMaxCharacters(playerid, min, max);
public MSG_InputMinMaxCharacters(playerid, min, max) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "O input deve ter no minimo %i caracteres e no máximo %i caracteres", min, max);
  else if(idiom[playerid] == 2) format(str, sizeof(str), "The input must have a minimum of %i characters and a maximum of %i characters", min, max);
  else if(idiom[playerid] == 3) format(str, sizeof(str), "La entrada debe tener un mínimo de %i caracteres y un máximo de %i caracteres", min, max);
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Ang input ay dapat magkaroon ng minimum na %i characters at maximum na %i characters", min, max);
  SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_usoucmdRECAviso(playerid); public MSG_usoucmdRECAviso(playerid) {
    if(idiom[playerid] == 1) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Aguarde para usar esse comando novamente!");
    else if(idiom[playerid] == 2) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Wait to use this command again!");
    else if(idiom[playerid] == 3) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Esperar para usar este comando de nuevo!");
    else if(idiom[playerid] == 4) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Maghintay upang gamitin muli ang command na ito!");
    return 1;
}
forward MSG_usoubuttonRECAviso(playerid); public MSG_usoubuttonRECAviso(playerid) {
    if(idiom[playerid] == 1) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Aguarde para usar esse botão novamente!");
    else if(idiom[playerid] == 2) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Wait to use this button again!");
    else if(idiom[playerid] == 3) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] ¡Espere para usar este botón nuevamente!");
    else if(idiom[playerid] == 4) return SendClientMessage(playerid, -1, "[ANTI-FLOOD-CMD] Maghintay upang gamitin muli ang pindutan na ito!");
    return 1;
}
forward MSG_InFightAviso(playerid); public MSG_InFightAviso(playerid) {
    new str[512];
    if(idiom[playerid] == 1) {
        format(str,sizeof(str),"Você está em MODO DE COMBATE (F) e por isso não pode realizar essa ação agora.\nTire as armas da mãos, não ataque ninguï¿½m e aguarde até que a Textdraw preta com o F do lado do seu dinheiro suma\npara poder realizar essa ação.\n\ntempo restante: %i segundos", FightTime[playerid]);
    }
    else if(idiom[playerid] == 2) {
        format(str,sizeof(str),"You are in COMBAT MODE (F) and therefore cannot perform this action.\nTake your weapons out of your hands, do not attack anyone and wait until the black Textdraw with the F next to your money disappears\nto be able to perform this action.\n\ntime remaining: %i seconds", FightTime[playerid]);
    }
    else if(idiom[playerid] == 3) {
        format(str,sizeof(str),"Estás en MODO DE COMBATE (F) y por lo tanto no puedes realizar esta acción ahora.\nQuítate las armas de las manos, no ataques a nadie y espera a que desaparezca el Textdraw negro con la F junto a tu dinero\npara poder realizar esta acción.\n\nTiempo restante: %i segundos", FightTime[playerid]);
    }
    else if(idiom[playerid] == 4) {
        format(str,sizeof(str),"Ikaw ay nasa COMBAT MODE (F) at samakatuwid ay hindi maaaring isagawa ang pagkilos na ito.\nAlisin mo ang iyong mga armas sa iyong mga kamay, wag kang aatake ng kahit sino at hintayin mo na lang mawala ang black Textdraw na may F sa tabi ng pera mo\nupang magawa ang aksyong ito.\n\ntime remaining: %i seconds", FightTime[playerid]);
    }
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Fight Mode:",str,"Ok","");
    return 1;
}
// colocar uma nova linha, sempre que chegar no limite de caracters, e colocar um -
StringInsertNewLine(string[], charcount, insert[], size = sizeof string)
{
    new len = strlen(string), lastspace = -1, count, insertlen = strlen(insert);

    for(new i = 0; i < len && i < size; i ++)
    {
        if(string[i] == ' ' && count != charcount) lastspace = i;
        
        if(count == charcount)
        {
            if(lastspace == -1) // Line end reached, but no space was found for the whole line. Break it here
            {
                strins(string, insert, i, size);
                strins(string, "-", i, size);

                count = 0;
                lastspace = -1;
                i += insertlen + 1;
                len += insertlen + 1;

                continue;
            }
            else // Line end reached and there was a space in the line, split it there
            {
                strdel(string, lastspace, lastspace + 1);
                strins(string, insert, lastspace, size);                    

                count = i - lastspace;
                lastspace = -1;
                i += insertlen - 1;
                len += insertlen - 1;

                continue;
            }
        }

        count ++;
    }

    return 1;
}
forward MSG_MissionPopUp(playerid);
public MSG_MissionPopUp(playerid) {
  new desc[128];
  if(idiom[playerid] == 1)      { desc = "/mission para abrir o passo a passo"; }
  else if(idiom[playerid] == 2) { desc = "/mission to open step by step"; }
  else if(idiom[playerid] == 3) { desc = "/mission para abrir el paso a paso"; }
  else if(idiom[playerid] == 4) { desc = "/mission upang buksan ang bawat hakbang"; }
  new str[128];
  new mtsid = mission[playerid];
  StringInsertNewLine(GetMissionTitle(playerid, mtsid), 30, "~n~"); // quebrar linhas com ~n~ e - apartir de X caracters
  format(str, sizeof(str), "Mission %i: %s~n~%s", mtsid, GetMissionTitle(playerid, mtsid), desc );
  if(loginFinished[playerid] == true) {
      PlayerTextDrawSetString(playerid, MissionTD[playerid][1], str);
      PlayerTextDrawShowEx(playerid, MissionTD[playerid][0]);
      PlayerTextDrawShowEx(playerid, MissionTD[playerid][1]);
  }
  // msg no chat tbm
  if(idiom[playerid] == 1) format(str, sizeof(str), "Faça todas as missões do servidor para entender como tudo funciona e receba diversos bonus! (/mission)");
  else if(idiom[playerid] == 2) format(str, sizeof(str), "Do all the server missions to understand how everything works and receive several bonuses! (/mission)");
  else if(idiom[playerid] == 3) format(str, sizeof(str), "¡Haz todas las misiones del servidor para comprender cómo funciona todo y recibe varias bonificaciones! (/mision)");
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Gawin ang lahat ng mga misyon ng server upang maunawaan kung paano gumagana ang lahat at makatanggap ng ilang mga bonus! (/mission)");
  SendClientMessage(playerid, COLOR_BLUEVIOLET, str);
}
forward MSG_NoobAntiDmMessageEquipGun(playerid); public MSG_NoobAntiDmMessageEquipGun(playerid) {
    new str[128];
    if(GetPlayerLevel(playerid, LVL_SKILLID_IDEFINED) < NOVATO_LVL) {
        if(idiom[playerid] == 1) {
            format(str,sizeof(str),"[FIGHT-ON] Enquanto estiver com armas em mãos irá ficar com FIGHT-MODE e desprotegido de ANTI-DM: /antidm");
        }
        else if(idiom[playerid] == 2) {
            format(str,sizeof(str),"[FIGHT-ON] While with weapons in hand, you will be in FIGHT-MODE and unprotected from ANTI-DM: /antidm");
        }
        else if(idiom[playerid] == 3) {
            format(str,sizeof(str),"[FIGHT-ON] Mientras tengas las armas en la mano, estarás en MODO LUCHA y desprotegido de ANTI-DM: /antidm");
        }
        else if(idiom[playerid] == 4) {
            format(str,sizeof(str),"[FIGHT-ON] Habang may mga armas sa kamay, ikaw ay nasa FIGHT-MODE at hindi protektado sa ANTI DM: /antidm");
        }
        SendClientMessage(playerid, COLOR_LIGHTRED, str);
    }
}
forward MSG_NoobAntiDmModeON(playerid); public MSG_NoobAntiDmModeON(playerid) {
    new str[128];
    if(GetPlayerLevel(playerid, LVL_SKILLID_IDEFINED) < NOVATO_LVL) {
        if(idiom[playerid] == 1) {
            format(str,sizeof(str),"[FIGHT-ON] Você ativou o Modo de Combate (F), e agora pode ser atacado e sofrer DM, mais informações /antidm");
        }
        else if(idiom[playerid] == 2) {
            format(str,sizeof(str),"[FIGHT-ON] You activated Combat Mode (F), and you can now be attacked and DMed, more info /antidm");
        }
        else if(idiom[playerid] == 3) {
            format(str,sizeof(str),"[FIGHT-ON] Activaste el modo de combate (F), y ahora puedes ser atacado y enviado por DM, más información /antidm");
        }
        else if(idiom[playerid] == 4) {
            format(str,sizeof(str),"[FIGHT-ON] Pinagana mo ang Combat Mode (F), at pwede ka na ngayong atakehin at DMed, more info /antidm");
        }
        SendClientMessage(playerid, COLOR_LIGHTRED, str);
    }
}
forward MSG_ExaustedArmourMEDIC(playerid);
public MSG_ExaustedArmourMEDIC(playerid) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Você já curou colete com medico recentemente, aguarde 15 minutos.");
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "You've healed with a doctor recently, wait 15 minutes.");
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Has curado el chaleco con un médico recientemente, espera 15 minutos.");
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Nagpagaling ka sa isang doktor kamakailan, maghintay ng 15 minuto.");
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_ArmourAddLimit(playerid, value);
public MSG_ArmourAddLimit(playerid, value) {
  new str[128];
  if(idiom[playerid] == 1) {
      format(str, sizeof(str), "Essa ação só consegue adicionar no máximo até %i de colete, você já tem %i", value, GetPlayerArmourEx(playerid) );
  }
  else if(idiom[playerid] == 2) {
      format(str, sizeof(str), "This action can only add up to maximum of %i of vest, you already have %i", value, GetPlayerArmourEx(playerid) );
  }
  else if(idiom[playerid] == 3) {
      format(str, sizeof(str), "Esta acción solo puede sumar un máximo de %i de vest, ya tienes %i", value, GetPlayerArmourEx(playerid) );
  }
  else if(idiom[playerid] == 4) {
      format(str, sizeof(str), "Ang pagkilos na ito ay maaari lamang magdagdag ng hanggang sa maximum ng %i of vest, meron ka nang %i", value, GetPlayerArmourEx(playerid) );
  }
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_NotFSafeFight(playerid);
public MSG_NotFSafeFight(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof(str), "Você não entrou no modo PROTEGIDO porque já entrou na SafeZone em combate!");
  else if(idiom[playerid] == 2) format(str, sizeof(str), "You have not entered PROTECTED mode because you've entered SafeZone in combat mode!");
  else if(idiom[playerid] == 3) format(str, sizeof(str), "¡No ha ingresado al modo PROTEGIDO porque ya ingresó a SafeZone en combate!");
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Hindi ka pa pumasok sa PROTECTED mode dahil nakapasok ka sa SafeZone na combat mode!");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  if(idiom[playerid] == 1) format(str, sizeof(str), "Sem o modo protegido outros jogadores podem te atacar e você não pode acessar o Presente e o Deposito.");
  else if(idiom[playerid] == 2) format(str, sizeof(str), "Without protected mode You can be attacked by other players and you cannot access Gift and Deposit.");
  else if(idiom[playerid] == 3) format(str, sizeof(str), "Sin el modo protegido, otros jugadores pueden atacarte y no puedes acceder a Gift and Deposit.");
  else if(idiom[playerid] == 4) format(str, sizeof(str), "Kung walang protected mode maari kang atakihin ng ibang players at hindi mo ma access ang Gift at Deposit.");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_AdmHelpReturnMessage(playerid);
public MSG_AdmHelpReturnMessage(playerid) {
  if(idiom[playerid] == 1) { SendClientMessage(playerid, COLOR_YELLOW, "Relatorio enviado com sucesso aguarde um administrador responder! (/admins)"); }
  else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_YELLOW, "Report sent successfully wait for an administrator to answer! (/admins)"); }
  else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_YELLOW, "¡Informe enviado con éxito espere a que un administrador responda! (/admins)"); }
  else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_YELLOW, "Matagumpay na naipadala ang ulat hintayin mo na lang ang sagot ng administrator! (/admins)"); }

  if(idiom[playerid] == 1) { SendClientMessage(playerid, COLOR_GREY, "Se você estiver bugado (preso) e não tiver nenhum online respondendo, você pode usar /kill para morrer e ir para o hospital!"); }
  else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_GREY, "If you're bugged (stuck) and don't have any online responding, you can use /kill to die and go to the hospital!"); }
  else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_GREY, "Si tienes un micrófono oculto (atascado) y no tienes ninguna respuesta en línea, ¡puedes usar /matar para morir e ir al hospital!"); }
  else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_GREY, "Kung ikaw ay bugged (stuck) at wala pang online na sumasagot, pwede mo gamitin ang /kill para mamatay at mapunta sa ospital!"); }

  if(idiom[playerid] == 1) { SendClientMessage(playerid, COLOR_GREY, "Se ainda assim você precisar de suporte logue no site com a sua conta do jogo e poste no fórum (/forum)"); }
  else if(idiom[playerid] == 2) { SendClientMessage(playerid, COLOR_GREY, "If you still need support, log into the site with your account and post on forum (/forum)"); }
  else if(idiom[playerid] == 3) { SendClientMessage(playerid, COLOR_GREY, "Si aún necesita soporte, inicie sesión en el sitio con su cuenta de juego y publique en el foro (/foro)"); }
  else if(idiom[playerid] == 4) { SendClientMessage(playerid, COLOR_GREY, "Kung kailangan mo pa rin ng suporta, Mag log in sa site gamit ang iyong account at mag-post sa forum (/forum)"); }
}
forward MSG_NpcReactingToAssault(playerid, dmgValue);
public MSG_NpcReactingToAssault(playerid, dmgValue) {
  new str[128];
  format(str, sizeof(str), "-%i", dmgValue);
  SendClientMessage(playerid, COLOR_PARAMEDIC, str);
  if(idiom[playerid] == 1) {
    format(str, sizeof(str), "O NPC da loja reagiu ao assalto e está te atirando!");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
  }
  else if(idiom[playerid] == 2) {
    format(str, sizeof(str), "The shop NPC reacted to the robbery and it will shoot you!");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
  }
  else if(idiom[playerid] == 3) {
    format(str, sizeof(str), "¡El NPC de la tienda reaccionó al robo y te está disparando!");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
  }
  else if(idiom[playerid] == 4) {
    format(str, sizeof(str), "Ang NPC sa tindahan ay nag react sa nakawan at babarilin ka nito!");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
  }
}
forward MSG_ValueRobbed(playerid, valuerob, valuepercent, lFacTax);
public MSG_ValueRobbed(playerid, valuerob, valuepercent, lFacTax) {
  new str[128];
  if(idiom[playerid] == 1) {
    format(str, sizeof(str), "Valor Roubado: %i$ (Extra Criminal Level Bonus: +%i$) [-%i$ Taxa da facção]", valuerob, valuepercent, lFacTax );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
  else if(idiom[playerid] == 2) {
    format(str, sizeof(str), "Stolen Value: %i$ (Extra Criminal Level Bonus: +%i$) [-%i$ Faction Fee]", valuerob, valuepercent, lFacTax );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
  else if(idiom[playerid] == 3) {
    format(str, sizeof(str), "Monto robado: %i$ (Bonificación de nivel criminal adicional: +%i$) [-%i$ Tarifa de facción]");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
  }
  else if(idiom[playerid] == 4) {
    format(str, sizeof(str), "Halaga ng Ninakaw: %i$ (Extra Criminal Level Bonus: +%i$) [-%i$ Faction Fee]", valuerob, valuepercent, lFacTax );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
}
forward MSG_ValueRobbedHouse(playerid, valuerob);
public MSG_ValueRobbedHouse(playerid, valuerob) {
  new str[128];
  if(idiom[playerid] == 1) {
    format(str, sizeof(str), "Valor roubado: %i$ (consiga mais dinheiro com mais nível de Criminoso)", valuerob );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
  else if(idiom[playerid] == 2) {
    format(str, sizeof(str), "Stolen Amount: %i$ (Get more money with more Criminal level)", valuerob );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
  else if(idiom[playerid] == 3) {
    format(str, sizeof(str), "Monto Robado: %i$ (Consigue más dinero con más nivel Criminal)", valuerob );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
  else if(idiom[playerid] == 4) {
    format(str, sizeof(str), "Halaga ng Ninakaw: %i$ (Kumuha ng mas maraming pera na may higit pang antas ng Kriminal)", valuerob );
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
  }
}
forward MSG_NoobHelper_RobHouse(playerid);
public MSG_NoobHelper_RobHouse(playerid) {
    new stringajuda[512];
    if(idiom[playerid] == 1) {
        format(stringajuda,sizeof(stringajuda),"==================== Aviso importante LEIA! ====================\nColoque o móvel em um porta malas de um carro! Apertando ALT ou usando /alt.\nColoque em um espaço vazio(Empty)!\nDepois venda isso em uma GangZone! (/gps)\n================================================================");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Mobile Sell:",stringajuda,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "==================== Aviso importante LEIA! ====================");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Coloque o móvel em um porta malas de um carro! Apertando ALT ou usando /alt.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Coloque em um espaço vazio(Empty)!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Depois venda isso em uma GangZone! (/gps)");
        SendClientMessage(playerid, COLOR_LIGHTRED, "================================================================");
    }
    else if(idiom[playerid] == 2) {
        format(stringajuda,sizeof(stringajuda),"==================== Read the important notice! ====================\nPut the mobile in a trunk of a car! Press ALT or use /alt.\nPut it in a empty space(Empty)!\nThen sells it in a mouth of smoke! A checkpoint on your map with a mouth of smoke was marked!\n================================================================");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Mobile Sell:",stringajuda,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "==================== Read the important notice! ====================");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Put the item in a trunk of car! Press ALT or use /alt.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Put it in a empty space(Empty)!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Then sells it in GangZone! (/gps)");
        SendClientMessage(playerid, COLOR_LIGHTRED, "================================================================");
    }
    else if(idiom[playerid] == 3) {
        format(stringajuda,sizeof(stringajuda),"==================== Aviso importante LEER! ====================\nï¿½Pon los muebles en el maletero de un coche! Presionando ALT o usando /alt.\nColoque em um espaço vazio(Empty)!\nï¿½Entonces vï¿½ndelo en una GangZone! (/gps)\n================================================================");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Mobile Sell:",stringajuda,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "==================== Aviso importante LEER! ====================");
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Pon los muebles en el maletero de un coche! Presionando ALT o usando /alt.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Coloque em um espaço vazio(Empty)!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Luego lo vende en una GangZone! (/GPS)");
        SendClientMessage(playerid, COLOR_LIGHTRED, "================================================================");
    }
    else if(idiom[playerid] == 4) {
        format(stringajuda,sizeof(stringajuda),"==================== Basahin ang mahalagang ABISO! ====================\nPut the mobile in a trunk of a car! Press ALT or use /alt.\nPut it in a empty space(Empty)!\nThen sells it in a mouth of smoke! A checkpoint on your map with a mouth of smoke was marked!\n================================================================");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Mobile Sell:",stringajuda,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "==================== Basahin ang mahalagang ABISO! ====================");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Ilagay ang item sa isang trunk ng kotse! Pindutin ang ALT o gamitin ang /alt.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Ilagay ito sa isang bakanteng espasyo(Empty)!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Tapos ibebenta ito sa GangZone! (/gps)");
        SendClientMessage(playerid, COLOR_LIGHTRED, "================================================================");
    }
}
forward MSG_CommandsHelp(playerid);
public MSG_CommandsHelp(playerid) {
    new str[100], final[3500];
    if(idiom[playerid] == 1)
    {
        format(str, sizeof(str), "{FFFFFF}Para ter uma melhor experiencia de jogo o IL evita ao maximo o uso de comandos para usar/decorar.");
        strcat(final, str);
        format(str, sizeof(str), "\nA maior parte dos comandos são feitos por meio de uso das teclas, são elas:");
        strcat(final, str);
        format(str, sizeof(str), "\n'H' | 'Y' | 'N' | 'ALT' | 'MIRAR' em: jogadores,npcs,objetos | '2'");
        strcat(final, str);

        format(str, sizeof(str), "\n\n{FF0000}/mission{FFFFFF} - Faça todas as missões do servidor para entender como funciona e receba diversos bonus!");
        strcat(final, str);

        if(IsAndroidPlayer(playerid) == true) {
            format(str, sizeof(str), "\n--- SAMP ANDROID SEM BOTÕES USE OS COMANDOS ---");
            strcat(final, str);
            format(str, sizeof(str), "\nA PÉ: /h, /f, /y, /n, /alt(/a)");
            strcat(final, str);
            format(str, sizeof(str), "\nEM VEÍCULOS: /n, /ctrl(/c), /y, /h, /alt(/a)");
            strcat(final, str);
            format(str, sizeof(str), "\ncomandos equivalentes a botões para que vocês consigam jogar de qualquer versão do SAMP mobile, mesmo as sem botões");
            strcat(final, str);
        }
        if(admin[playerid] > 0) {
            format(str, sizeof(str), "\n\n* admins commands *\n/aa\n");
            strcat(final, str);
        }
        format(str, sizeof(str), "\n\n[PT] /idioma - trocar seu idioma");
        strcat(final, str);
        format(str, sizeof(str), "\n[ENG] /idiom - change your language");
        strcat(final, str);
        format(str, sizeof(str), "\n[ESP] /idioma - cambia tu idioma");
        strcat(final, str);
    }
    else if(idiom[playerid] == 2)
    {
        format(str, sizeof (str), "{FFFFFF}In order to have a better gaming experience, IL avoids the use of commands to use/decorate as much as possible.");
        strcat(final, str);
        format(str, sizeof (str), "\nMost of the commands are done using the keys, they are:");
        strcat(final, str);
        format(str, sizeof (str), "\n'H' | 'Y' | 'N' | 'ALT' | 'AIM' in: players, npcs, objects | '2'");
        strcat(final, str);

        format(str, sizeof (str), "\n\n{FF0000}/mission{FFFFFF} - Do all the server missions to understand how it works and receive several bonuses!");
        strcat(final, str);

        if (IsAndroidPlayer(playerid) == true) {
            format(str, sizeof (str), "\n--- SAMP ANDROID WITHOUT BUTTONS USE THE COMMANDS ---");
            strcat(final, str);
            format(str, sizeof (str), "\nON FOOT:/h,/f,/y,/n,/alt (/a)");
            strcat(final, str);
            format(str, sizeof (str), "\nEM VEHICLES:/n,/ctrl (/c),/y,/h,/alt (/a)");
            strcat(final, str);
            format(str, sizeof (str), "\ncommands equivalent to buttons so that you can play any version of SAMP mobile, even those without buttons");
            strcat(final, str);
        }
        if (admin[playerid] > 0) {
            format(str, sizeof (str), "\n\n* admins commands * \n/aa\n");
            strcat(final, str);
        }
        format(str, sizeof (str), "\n\n[EN]/language - change your language");
        strcat(final, str);
        format(str, sizeof (str), "\n[ENG]/idiom - change your language");
        strcat(final, str);
        format(str, sizeof (str), "\n[ESP]/language - change your language");
        strcat(final, str); 
    }
    else if(idiom[playerid] == 3)
    {
        format(str, sizeof(str), "{FFFFFF}Para tener una mejor experiencia de juego, IL evita el uso de comandos para usar /decorar tanto como sea posible");
        strcat(final, str);
        format(str, sizeof(str), "\nLa mayoría de los comandos se realizan con las teclas, son:");
        strcat(final, str);
        format(str, sizeof(str), "\n'H' | 'Y' | 'N' | 'ALT' | 'AIM' en: jugadores, npcs, objetos | '2'");
        strcat(final, str);

        format(str, sizeof(str), "\n\n{FF0000}/mission{FFFFFF} - ¡Haz todas las misiones del servidor para entender cómo funciona y recibe varias bonificaciones!");
        strcat(final, str);

        if(IsAndroidPlayer(playerid) == true) {
            format(str, sizeof(str), "\n --- SAMP ANDROID SIN BOTONES USA LOS COMANDOS ---");
            strcat(final, str);
            format(str, sizeof(str), "\nA PIE: /h, /f, /y, /n, /alt(/a)");
            strcat(final, str);
            format(str, sizeof(str), "\nEM VEHICULOS: /n, /ctrl(/c), /y, /h, /alt(/a)");
            strcat(final, str);
            format(str, sizeof(str), "\ncomandos equivalentes a botones para que puedas jugar desde cualquier versiï¿½n de SAMP mobile, incluso las que no tienen botones");
            strcat(final, str);
        }
        if(admin[playerid]> 0) {
            format(str, sizeof(str), "\n\n* comandos de administrador *\n/aa\n");
            strcat(final, str);
        }
        format(str, sizeof(str), "\n\n[EN] /idioma - cambia tu idioma");
        strcat(final, str);
        format(str, sizeof(str), "\n[ENG] /idioma - cambia tu idioma");
        strcat(final, str);
        format(str, sizeof(str), "\n[ESP] /language - cambia tu idioma");
        strcat(final, str); 
    }
    else if(idiom[playerid] == 4)
    {
        format(str, sizeof (str), "{FFFFFF}Upang magkaroon ng isang mas mahusay na karanasan sa paglalaro, hangga't maaari iniiwasan ng IL ang paggamit ng mga command .");
        strcat(final, str);
        format(str, sizeof (str), "\nKaramihan sa mga command ay ginamitan lang ng button keys, ang mga ito ay:");
        strcat(final, str);
        format(str, sizeof (str), "\n'H' | 'Y' | 'N' | 'ALT' | 'AIM' in: players, npcs, objects | '2'");
        strcat(final, str);

        format(str, sizeof (str), "\n\n{FF0000}/mission{FFFFFF} - Gawin ang lahat ng mga misyon ng server upang maunawaan kung paano ito gumagana at makatanggap ng ilang mga bonus!");
        strcat(final, str);

        if (IsAndroidPlayer(playerid) == true) {
            format(str, sizeof (str), "\n--- SAMP ANDROID WITHOUT BUTTONS USE THE COMMANDS ---");
            strcat(final, str);
            format(str, sizeof (str), "\nON FOOT:/h,/f,/y,/n,/alt (/a)");
            strcat(final, str);
            format(str, sizeof (str), "\nEM VEHICLES:/n,/ctrl (/c),/y,/h,/alt (/a)");
            strcat(final, str);
            format(str, sizeof (str), "\nmga commands na katumbas ng mga button keys upang maaari mong laruin ang anumang bersyon ng SAMP mobile, kahit yung mga walang buttons");
            strcat(final, str);
        }
        if (admin[playerid] > 0) {
            format(str, sizeof (str), "\n\n* admins commands * \n/aa\n");
            strcat(final, str);
        }
        format(str, sizeof (str), "\n\n[EN]/language - baguhin ang iyong wika");
        strcat(final, str);
        format(str, sizeof (str), "\n[ENG]/idiom - baguhin ang iyong wika");
        strcat(final, str);
        format(str, sizeof (str), "\n[ESP]/language - baguhin ang iyong wika");
        strcat(final, str);
        format(str, sizeof (str), "\n[PH]/wika - baguhin ang iyong wika");
        strcat(final, str);
    }
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Commands Help:",final,"Ok","");
}
forward MSG_AntiCheatAdmAviso(playerhackid, reason[]);
public MSG_AntiCheatAdmAviso(playerhackid, reason[]) {
    new string[128];
    format(string, sizeof(string), "ANTICHEAT: (%i) %s was detected by: %s", playerhackid, PlayerName(playerhackid), reason );
    ABroadCast(COLOR_LIGHTGREEN,string,1);
    writeLog("LOGS/anticheat.txt",string);
}
forward MSG_AdmCmdAdminsAviso(playerid, avisolvl, text[]);
public MSG_AdmCmdAdminsAviso(playerid, avisolvl, text[]) {
    if(admstatus[playerid] != 2) // inv mode não consola
    {
        ABroadCast(COLOR_LIGHTRED,text,avisolvl);
    }
}
forward MSG_TryPickItemWithItemOnHands(playerid);
public MSG_TryPickItemWithItemOnHands(playerid) {
    if(idiom[playerid] == 1) SendClientMessage (playerid, -1 , "Você já está segurando um item! Tente um SLOT vazio! (Empty)" );
    else if(idiom[playerid] == 2) SendClientMessage (playerid, -1 , "You're already holding a item! Try an empty SLOT!" );
    else if(idiom[playerid] == 3) SendClientMessage (playerid, -1 , "¡Ya tienes un artículo! ¡Prueba con una SLOT vacía! (Vacío)" );
    else if(idiom[playerid] == 4) SendClientMessage (playerid, -1 , "May hawak ka pang item! Subukan ang isang walang laman na SLOT!" );
    return true;
}
forward MSG_CopsCantUseThisCommand(playerid);
public MSG_CopsCantUseThisCommand(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str, sizeof str, "COPs não podem usar este comando!");
  else if(idiom[playerid] == 2) format(str, sizeof str, "COPs can not use this command!");
  else if(idiom[playerid] == 3) format(str, sizeof str, "¡COP no pueden usar este comando!");
  else if(idiom[playerid] == 4) format(str, sizeof str, "Hindi magagamit ng mga COP ang command na ito!");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_RobDisarmedOrWeaponOnHands(playerid); public MSG_RobDisarmedOrWeaponOnHands(playerid) {
    new string[256];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Para realizar esse roubo você precisa ter armas no seu inventario e precisa estar sem arma nas mãos!\n- compre uma arma, guarde na mochila\n- e sem armas em mãos inicie esse roubo");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Rob With No Weapon:",string,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Para realizar esse roubo você precisa ter armas no seu inventario e precisa estar sem arma nas mãos!");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"To carry out this robbery you need to have weapons in your inventory and you need to be without a weapon in your hands!\n- buy a weapon, keep it in your backpack\n- and without weapons in hand, start this robbery");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Rob With No Weapon:",string,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "To carry out this robbery you need to have weapons in your inventory and you need to be without a weapon in your hands!");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Para llevar a cabo este robo necesitas tener armas en tu inventario y necesitas estar sin un arma en tus manos!\n- compra un arma, guárdala en tu mochila\n- y sin armas en la mano, comienza este robo");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Rob With No Weapon:",string,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Para llevar a cabo este robo necesitas tener armas en tu inventario y necesitas estar sin un arma en tus manos!");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Upang maisagawa ang nakawan na ito kailangan may armas ka sa inventory mo at dapat ay walang armas sa iyong mga kamay!\n- bumili ng armas, itago mo sa backpack mo\n- at walang armas sa kamay, simulan ang nakawan na ito");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Rob With No Weapon:",string,"Ok","");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Upang maisagawa ang nakawan na ito kailangan may armas ka sa inventory mo at dapat ay walang armas sa iyong mga kamay!");
    }
    return 1;
}
forward MSG_TryBeCOPwanted(playerid); public MSG_TryBeCOPwanted(playerid) {
    new string[256];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Você está procurado pela policia! não pode virar um policial! Se entregue para um policial para ser preso OU use as lojas: Barber Shop e Tatto Studio para ir removendo seu nível de procurado!");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Wanted Try To Be COP:",string,"Ok","");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"You are wanted by the police! You can not become a cop! Surrender to a police officer to be arrested OR use the shops: Barber Shop and Tatto Studio to remove your wanted level!");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Wanted Try To Be COP:",string,"Ok","");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Eres buscado por la policía! ¡No puedes convertirte en policía! ¡Entrégate a un oficial de policía para que te arreste O usa las tiendas: Barber Shop y Tatto Studio para eliminar tu nivel de búsqueda!");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Wanted Try To Be COP:",string,"Ok","");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Ikaw ay pinaghahanap ng pulisya! Hindi ka maaaring maging isang pulis! Sumuko sa isang pulis upang ikaw ay arestuhin o gamitin ang mga tindahan: Barber Shop at Tatto Studio upang alisin ang iyong level!");
        ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Wanted Try To Be COP:",string,"Ok","");
    }
    return 1;
}
forward MSG_JobBlockedForNewbies(playerid); public MSG_JobBlockedForNewbies(playerid) {
    new string[128];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Esse emprego é bloqueado para jogadores principientes (menos que nível 3)...\nEscolha um liberado para novatos como:\n- Motorista de Onibus\n- Entregador de Pizza\n- Pescador\n- Piloto de avião");
        ShowPlayerDialog(playerid,59,DIALOG_STYLE_MSGBOX,"Newbie Job:",string,"Ok","");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"This job is blocked for beginner players (less than level 3)...\nChoose one released for newbies like:\n- Bus driver\n- Pizza delivery boy\n- Fisherman\n- Airplane pilot");
        ShowPlayerDialog(playerid,59,DIALOG_STYLE_MSGBOX,"Newbie Job:",string,"Ok","");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"Este trabajo está bloqueado para jugadores principiantes (menos de nivel 3)...\nElige uno liberado para novatos como:\n- Conductor de autobï¿½s\n- Repartidor de pizza\n- Pescador\n- Piloto de aviï¿½n");
        ShowPlayerDialog(playerid,59,DIALOG_STYLE_MSGBOX,"Newbie Job:",string,"Ok","");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Ang trabahong ito ay naka block para sa mga manlalaro ng nagsisimula pa lamang (mas mababa sa level 3)...\nPumili ng isa na inilabas para sa mga newbies tulad ng:\n- Bus driver\n- Pizza delivery boy\n- Fisherman\n- Airplane pilot");
        ShowPlayerDialog(playerid,59,DIALOG_STYLE_MSGBOX,"Newbie Job:",string,"Ok","");
    }
    return 1;
}
forward MSG_AdmInWorkCantUseThisCommand(playerid);
public MSG_AdmInWorkCantUseThisCommand(playerid) {
    if(idiom[playerid] == 1) SendClientMessage (playerid, -1 , "ADMs em modo de trabalho não podem fazer isso!" );
    else if(idiom[playerid] == 2) SendClientMessage (playerid, -1 , "ADMs in work mode can not do that!" );
    else if(idiom[playerid] == 3) SendClientMessage (playerid, -1 , "ADM en modo de trabajo no pueden hacer eso!" );
    else if(idiom[playerid] == 4) SendClientMessage (playerid, -1 , "Hindi magagawa iyon ng mga ADM na nasa work mode!" );
}
forward MSG_YouAreNotParamedic(playerid);
public MSG_YouAreNotParamedic(playerid) {
    if(idiom[playerid] == 1) { SendClientMessage(playerid, -1, "Você não é Paramedico!"); }
    else if(idiom[playerid] == 2) { SendClientMessage(playerid, -1, "You are not a Paramedic!"); }
    else if(idiom[playerid] == 3) { SendClientMessage(playerid, -1, "¡No eres un paramédico!"); }
    else if(idiom[playerid] == 4) { SendClientMessage(playerid, -1, "Hindi ka Paramedic!"); }
}
forward MSG_CmdBlockedToVirtualWorlds(playerid);
public MSG_CmdBlockedToVirtualWorlds(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof str, "Esse comando é bloqueado de ser usado em um Mundo Virtual!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof str, "This command is blocked from being used in a Virtual World!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof str, "¡Este comando está bloqueado para que no se use en un Mundo Virtual!");
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof str, "Ang command na ito ay hindi magagamit sa Virtual World!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
    if(idiom[playerid] == 1) {
        format(str, sizeof str, "saia do interior que você está para usar esse comando, se você não estiver em uma loja saia e entre de uma.");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof str, "exit the interior you are in to use this command, if you are not in a store exit and enter one.");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof str, "salga del interior en el que se encuentra para usar este comando, si no está en una tienda, salga e ingrese una.");
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof str, "lumabas sa loob na iyong kinaroroonan upang magamit ang command na ito, kung wala ka sa isang tindahan maaring lumabas at pumasok sa iba.");
    }
    SendClientMessage(playerid, COLOR_GREY, str);
}
forward MSG_CmdBlockedToInteriors(playerid);
public MSG_CmdBlockedToInteriors(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof str, "Esse comando é bloqueado de ser usado em um Interior!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof str, "This command is blocked from being used in a Interior!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof str, "¡Este comando está bloqueado para que no se use en un Interior!");
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof str, "Ang command na ito ay hindi magagamit sa Interior!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
    if(idiom[playerid] == 1) {
        format(str, sizeof str, "saia do interior que você está para usar esse comando, se você não estiver em uma loja saia e entre de uma.");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof str, "exit the interior you are in to use this command, if you are not in a store exit and enter one.");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof str, "salga del interior en el que se encuentra para usar este comando, si no está en una tienda, salga e ingrese una.");
    }
    else if(idiom[playerid] == 4) {
        format(str, sizeof str, "lumabas sa loob na iyong kinaroroonan upang magamit ang command na ito, kung wala ka sa isang tindahan maaring lumabas at pumasok sa iba.");
    }
    SendClientMessage(playerid, COLOR_GREY, str);
}
forward MSG_PoliceApproach(playerid, targetid);
public MSG_PoliceApproach(playerid, targetid) {
    new string[128];
    // surrender
    if(idiom[targetid] == 1) format(string, sizeof(string), "~n~~n~~n~~n~~b~Parado Policia!~w~~n~Use: /render ou você será procurado!");
    else if(idiom[targetid] == 2) format(string, sizeof(string), "~n~~n~~n~~n~~b~Stopped Police!~w~~n~Use: /render or you will be wanted!");
    else if(idiom[targetid] == 3) format(string, sizeof(string), "~n~~n~~n~~n~~b~ï¿½Policï¿½a detenida!~w~~n~Usa: /render o te buscarï¿½n.");
    else if(idiom[targetid] == 4) format(string, sizeof(string), "~n~~n~~n~~n~~b~Itaas ang kamay at walang kikilos ng masama!~w~~n~Gamiting ang: /render o ikaw ay magiging wanted!");
    GameTextForPlayerEx(targetid, string, 30000, 3);
    // megaphone
    format(string, sizeof(string), "[MEGAPHONE] Officer %s said to %s stop! Put your hands up!!!", PlayerName(playerid), PlayerName(targetid));
    ProxDetector(80.0, playerid,string,COLOR_YELLOW,COLOR_YELLOW,COLOR_YELLOW,COLOR_YELLOW,COLOR_YELLOW);
    SetPlayerChatBubble(playerid,string,COLOR_YELLOW,20.0,5000);
}
forward MSG_StartHandsupToCheck(playerid);
public MSG_StartHandsupToCheck(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você levantou as mãos para ser revistado, não abaixe até terminar o contador!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You raised your hands to be searched, don't lower until the counter is over!");    
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Levantaste las manos para que te registren, no las bajes hasta que se acabe el contador!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Itaas mo ang iyong mga kamay, wag mo ibaba hanggang sa matapos ang bilang!");    
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_ChangeBeltStats(playerid, bool:stats);
public MSG_ChangeBeltStats(playerid, bool:stats) {
    if(stats == true) { // on
        if(idiom[playerid] == 1) GameTextForPlayerEx(playerid, "~w~Cinto de Segurança ~g~ON", 1000, 3);
        else if(idiom[playerid] == 2) GameTextForPlayerEx(playerid, "~w~Seat Belt ~g~ON", 1000, 3);
        else if(idiom[playerid] == 3) GameTextForPlayerEx(playerid, "~w~Cinturï¿½n de Seguridad ~g~ON", 1000, 3);
        else if(idiom[playerid] == 4) GameTextForPlayerEx(playerid, "~w~Seat Belt ~g~ON", 1000, 3);
    }
    else if(stats == false) { // off
        if(idiom[playerid] == 1) GameTextForPlayerEx(playerid, "~w~Cinto de Segurança ~r~OFF", 1000, 3);
        else if(idiom[playerid] == 2) GameTextForPlayerEx(playerid, "~w~Seat Belt ~r~OFF", 1000, 3);
        else if(idiom[playerid] == 3) GameTextForPlayerEx(playerid, "~w~Cinturón de Seguridad ~r~OFF", 1000, 3);
        else if(idiom[playerid] == 4) GameTextForPlayerEx(playerid, "~w~Seat Belt ~r~OFF", 1000, 3);
    }
}
forward MSG_CantExtinguisherTargetAlive(playerid);
public MSG_CantExtinguisherTargetAlive(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- para oferecer cura para jogadores vivo use a ambulancia!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- você perdeu 1 skill por usar extintor em jogador vivo, se chegar a 0 será demitido!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- to offer healing to live players use the ambulance!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- you lost 1 skill for using fire extinguisher on live player, if you reach 0 you will be fired!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- para ofrecer curación a jugadores vivos, ¡usa la ambulancia!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- perdiste 1 habilidad por usar el extintor de incendios en el jugador en vivo, si llegas a 0, ï¿½serï¿½s despedido!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- upang mag alok ng pagpapagaling sa mga buhay na manlalaro gamitin ang ambulansya!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- nawalan ka ng 1 skill para sa paggamit ng fire extinguisher sa buhay na player, if you reach 0 you will be fired!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_PauseOnJailing(playerid);
public MSG_PauseOnJailing(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você foi automaticamente preso e punido por entrar em pause enquanto era preso!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You were automatically arrested and punished for pausing while you were arrested!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Fuiste arrestado y castigado automáticamente por hacer una pausa mientras estabas arrestado!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Awtomatikong inaresto ka at pinarusahan dahil sa pause habang ikaw ay naaresto!");
    }
}
forward MSG_PauseOnKidnapping(playerid);
public MSG_PauseOnKidnapping(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você foi automaticamente sequestrado e punido por entrar em pause enquanto era sequestrado!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You were automatically kidnapped and punished for going on pause while being kidnapped!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Fuiste secuestrado y castigado automáticamente por hacer una pausa mientras estabas secuestrado!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Awtomatikong dinukot ka at pinarusahan dahil sa pause habang dinudukot!");
    }
}
forward MSG_PauseOnCorruption(playerid);
public MSG_PauseOnCorruption(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você foi automaticamente punido por entrar em pause enquanto estava em modo Corrupto!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You were automatically punished for pausing while in Corrupt mode!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Fuiste castigado automáticamente por pausar mientras estabas en modo Corrupto!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Awtomatikong pinarusahan ka dahil sa pag pause habang nasa Corrupt mode");
    }
}
forward MSG_StartedCorruption(playerid);
public MSG_StartedCorruption(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você cometeu um ato de corrupção como policial!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- cuidado para não ser pego por um membro do FBI ou CIA");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- não se desconecte do jogo ou entre em pause nos próximos 5 minutos ou será severamente punido.");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You committed an act of corruption as a police officer!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- be careful not to get caught by a member of the FBI or CIA");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- do not disconnect from the game or pause within the next 5 minutes or you will be severely punished.");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Cometiste un acto de corrupción como oficial de policía!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- tenga cuidado de no ser atrapado por un miembro del FBI o la CIA");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- no te desconectes del juego ni hagas una pausa en los próximos 5 minutos o serï¿½s severamente castigado.");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Nakagawa ka ng isang katiwalian bilang isang pulis!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- ingat ka na lang baka mahuli ka ng member ng FBI or CIA");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- huwag mag disconnect sa laro o mag pause sa loob ng susunod na 5 minuto o ikaw ay bibigyan mabigat na parusa.");
    }
}
forward MSG_EndCorruption(playerid);
public MSG_EndCorruption(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Seu ato de corrupção acabou! Não deve mais nada pra justiça...");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Your act of corruption is over! You don't owe anything to justice anymore...");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "¡Tu acto de corrupción ha terminado! Ya no le debes nada a la justicia...");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Tapos na ang iyong pagkilos ng katiwalian! Wala ka nang utang na loob sa hustisya...");
    }
}
forward MSG_AlreadyCommittingCorruption(playerid);
public MSG_AlreadyCommittingCorruption(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você já está cometendo corrupção, aguarde para realizar essa ação novamente!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You are already committing corruption, wait to perform this action again!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Ya estás cometiendo corrupción, espera para realizar esta acción nuevamente!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Gumagawa ka na ng katiwalian, Maghintay upang maisagawa muli ang aksyong ito!");
    }
}
forward MSG_GlobalSave(playerid);
public MSG_GlobalSave(playerid) {
    new string[128];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"[GLOBAL-SAVE] O servidor será reiniciado para salvamento global!");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"[GLOBAL-SAVE] The server will be restarted to global save!");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"[GLOBAL-SAVE] ¡El servidor se reiniciará para el guardado global!");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"[GLOBAL-SAVE] Ang server ay mag-restart sa loob lamang ng ilang minuto!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, string);
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"GLOBAL SAVE MSG",string,"Ok","");
}
forward MSG_PlayerOnfootSpeedHack(playerid);
public MSG_PlayerOnfootSpeedHack(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Velocidade máxima a pé atingida! Possível ANIM HACK DETECTADO!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "A animação do seu GTA pode estar te dando vantagem de velocidade a pé!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você deve trocar pela original, se não sabe fazer isso peça ajuda no /discord ou no /forum");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Maximum walking speed reached! Possible ANIM HACK DETECTED!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Your GTA animation may be giving you a foot speed advantage!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "You should change it to the original one, if you don't know how to do that, ask for help on /discord or /forum");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Velocidad máxima al caminar alcanzada! ¡Posible ANIM HACK DETECTADO!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Tu animación de GTA puede estar dándote una ventaja de velocidad de pie!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Deberías cambiarlo por el original, si no sabes cómo hacerlo, pide ayuda en /discord o /forum");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Naabot ang maximum na bilis ng paglalakad! Posibleng ANIM HACK DETECTED!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Ang iyong GTA animation ay maaaring nagbibigay sa iyo ng isang bentahe sa bilis ng paa!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Dapat palitan mo na lang ng original, kung hindi mo alam kung paano gawin iyon, humingi ng tulong sa /discord o /forum");
    }
}
forward MSG_PlayerOnVehicleSpeedHack(playerid);
public MSG_PlayerOnVehicleSpeedHack(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Velocidade máxima deste veículo ultrapassada! Possível VEHICLE SPEED HACK DETECTADO!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "A velocidade desse veículo no seu GTA pode estar te dando vantagem em relação a velocidade original e correta!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você deve trocar pela original, se não sabe fazer isso peça ajuda no /discord ou no /forum");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Lataria do veiculo reduzida! Diminua a velocidade!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Maximum speed of this vehicle exceeded! Possible VEHICLE SPEED HACK DETECTED!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "The speed of this vehicle in your GTA may be giving you an advantage over the original and correct speed!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "You must change it for the original one, if you don't know how to do this, ask for help on /discord or /forum");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Reduced bodywork! Slow down!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Velocidad máxima de este vehículo excedida! ¡POSIBLE HACK DE VELOCIDAD DEL VEHÍCULO DETECTADO!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡La velocidad de este vehículo en su GTA puede darle una ventaja sobre la velocidad original y correcta!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Debes cambiarlo por el original, si no sabes como hacerlo pide ayuda en /discord o /forum");
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Carrocería reducida! ¡Desacelerar!");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Maximum na bilis ng sasakyang ito ay lumampas! Posibleng VEHICLE SPEED HACK DETECTED!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Ang bilis ng sasakyang ito sa iyong GTA ay maaaring nagbibigay sa iyo ng isang kalamangan sa orihinal at tamang bilis!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Dapat palitan mo na lang ng original, kung hindi mo alam kung paano gawin iyon, humingi ng tulong sa /discord o /forum");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Reduced bodywork! Slow down!");
    }
}
forward MSG_DestroyRentedVehicle(playerid);
public MSG_DestroyRentedVehicle(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Seu veículo alugado não foi renovado e foi devolvido");
        MSG_RentVehicleReturn(playerid);
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Your rental vehicle has not been renewed and has been returned");
        MSG_RentVehicleReturn(playerid);
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Su vehï¿½culo de alquiler no ha sido renovado y ha sido devuelto");
        MSG_RentVehicleReturn(playerid);
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Hindi pa narenew ang iyong rental vehicle at naibalik na");
        MSG_RentVehicleReturn(playerid);
    }
}
forward MSG_OnNoobRentRentedVehicle(playerid);
public MSG_OnNoobRentRentedVehicle(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você alugou um veículo temporario!");
        MSG_RentVehicleReturn(playerid);
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You have rented a temporary vehicle!");
        MSG_RentVehicleReturn(playerid);
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Has alquilado un vehículo temporal!");
        MSG_RentVehicleReturn(playerid);
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Nagrenta ka na ng pansamantalang sasakyan!");
        MSG_RentVehicleReturn(playerid);
    }
}
forward MSG_RentVehicleReturn(playerid);
public MSG_RentVehicleReturn(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- os horarios de devolução são: 02:00 e 14:00");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- você pode comprar um veiculo concessionária para evitar isso");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- return times are: 02:00 and 14:00");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- you can buy a car in dealership to avoid this");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- los horarios de regreso son: 02:00 y 14:00");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- puede comprar un concesionario de automóviles para evitar esto");
    }
    else if(idiom[playerid] == 4) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "- mga oras ng pagbabalik ay: 02:00 and 14:00");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- pwede ka bumili ng kotse sa dealership para maiwasan ito");
    }
}
forward MSG_Jailed(playerid, bankMoney);
public MSG_Jailed(playerid, bankMoney) {
    new string[512];
    if(idiom[playerid] == 1) format(string,sizeof(string),"--- NÍVEL DE PROCURADO ---\n\nSeu nível de procurado é adicionado automaticamente quando um policial vá você cometendo um crime\nnão é o policial que te coloca como procurado e sim o servidor\no policial só sabe que você é procurado pela cor no seu nome\n\n--- DINHEIRO ---\n\nSeu dinheiro foi automaticamente depositado no banco quando você foi capturado.\nSaldo no banco: [%i]", bankMoney);
    else if(idiom[playerid] == 2) format(string,sizeof(string),"--- WANTED LEVEL ---\n\nYour wanted level is automatically added when a police officer sees you committing a crime\nit is not the police officer who puts you as wanted but the server\nthe police officer only knows that you are wanted by the color in your name\n\n--- MONEY ---\n\nYour money was automatically deposited in the bank when you were arrested.\nBank balance: [%i]", bankMoney);
    else if(idiom[playerid] == 3) format(string,sizeof(string),"--- NIVEL DE BUSQUEDA ---\n\nTu nivel de buscado se agrega automï¿½ticamente cuando un oficial de policï¿½a te ve cometiendo un delito\nno es el oficial de policï¿½a quien te pone como buscado sino el servidor\nel oficial de policï¿½a solo sabe que eres buscado por el color de tu nombre\n\n--- DINERO ---\n\nTu dinero se depositï¿½ automï¿½ticamente en el banco cuando te capturaron.\nSaldo bancario: [%i]", bankMoney);
    else if(idiom[playerid] == 4) format(string,sizeof(string),"--- WANTED LEVEL ---\n\nAng iyong wanted level ay awtomatikong idinagdag kapag nakita ka ng isang pulis na gumagawa ng krimen\nhindi pulis ang naglalagay sa iyong bilang ng wanted kundi ang server\nang alam lang ng pulis ay wanted ka sa kulay sa pangalan mo\n\n--- MONEY ---\n\nKusang naideposito sa bangko ang pera mo nang arestuhin ka.\nBank balance: [%i]", bankMoney);
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"MSG JAIL",string,"Ok","");
}
forward MSG_IMPORTANT_BUY_FACTION(playerid);
public MSG_IMPORTANT_BUY_FACTION(playerid) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Deixa dinheiro no cofre da facção se isso zerar a facção é deletada\nO dinheiro do cofre é diminuido a cada PayDay, em roubos a HQ e Operações policiais, entï¿½o defenda sua HQ\nEscreva: 'li e entendo as consequencias' se você leu tudo! (lá muito importante que você leia ou poderá perder seus bens)");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Leave money in the faction's vault if this clears the faction the faction is deleted\nThe money in the vault is decreased every PayDay, in HQ robberies and Police Operations, so defend your HQ\nWrite: 'i read and understand the consequences' if You read everything ! (there is very important that you read or you could lose your goods)");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"Deje el dinero en la caja fuerte de la facción si esto borra la facción se elimina la facción\nEl dinero en la caja fuerte se reduce todos los días de pago, en robos a la sede y operaciones policiales, así que defienda su sede\nEscriba: 'He leído y comprendido las consecuencias' si lees todo! (es muy importante que leas o podrías perder tus bienes)");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Mag iwan ng pera sa kaban ng faction's kung ito ang ay maubos sa faction ang faction ay mabubura\nThe money in the vault is decreased every PayDay, in HQ robberies and Police Operations, so defend your HQ\nWrite: 'i read and understand the consequences' if You read everything ! (there is very important that you read or you could lose your goods)");
    }
    ShowPlayerDialog(playerid,93,DIALOG_STYLE_INPUT,"Buy Faction Important Warning:",string,"Ok","");
}
forward MSG_IMPORTANT_BUY_VEHICLE(playerid);
public MSG_IMPORTANT_BUY_VEHICLE(playerid) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Aviso importante!\nGuarde/retire seu veiculo em uma garagem de Casa/HQ/Publica\nVeiculos não retirados de garagens por mais de 6 meses serï¿½o automaticamente deletados.\nEscreva: 'li e entendo as consequencias' se você leu tudo! (ï¿½ muito importante que você leia ou poderá perder seus bens)");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Important notice!\nStore/pick up your vehicle at a Home/HQ/Public garage\nVehicles not picked up from garages for more than 6 months will be automatically deleted.\nWrite: 'I have read and understand the consequences' if You read everything! (It is very important that You read or you could lose your assets)");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Aviso importante!\nAlmacenar/recoger su vehículo en un domicilio/sede central/garaje público\nLos vehículos que no hayan sido recogidos de los talleres durante más de 6 meses se eliminarán automáticamente.\nEscriba: 'Leí y entiendo las consecuencias' si leyó todo ! (es muy importante que lo leas o podrías perder tus bienes)");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Mahalagang abiso!\nIimbak/dalhin ang iyong kotse sa isang Bahay/HQ/Pang-publikong garahe\nMga sasakyan na hindi nakuha mula sa mga garahe nang higit sa 6 na buwan ay awtomatikong mabubura.\nIsulat ang: 'I have read and understand the consequences' kung nabasa mo ang lahat! (Ito ay napakahalaga na mabasa mo o maaari mong mawala ang iyong mga ari arian)");
    }
    ShowPlayerDialog(playerid,92,DIALOG_STYLE_INPUT,"Vehicle Buy ImportantWarning:",string,"Ok","");
}
forward MSG_IMPORTANT_BUY_HOUSE(playerid);
public MSG_IMPORTANT_BUY_HOUSE(playerid) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Aviso importante!\n1) Guardar dinheiro dentro de sua casa para pagar as contas...\nSe sua casa não tiver o sucifiente para pagar as contas você irá perder a casa\n\n2) você recebeu 3 alarmes de casa, compre alarmes e aumente o nivel de sua fechadura para que sua casa fique segura!\nEscreva: 'li e entendo as consequencias' se você leu tudo! (ï¿½ muito importante que você leia ou poderá perder seus bens)");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Important notice!\n1) Save money inside your house to pay the bills...\nIf your house doesn't have enough to pay the bills You will lose the house\n\n2) You received 3 house alarms, buy alarms and increase the level of your lock so that your house is safe!\nWrite: 'I read and understand the consequences' if You read everything! (It is very important that You read this or you could lose your assets)");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Aviso importante!\n1) Ahorre dinero dentro de su casa para pagar las cuentas...\nSi su casa no tiene suficiente para pagar las cuentas, perderá la casa\n\n2) recibió 3 alarmas para la casa, compre alarmas y ¡aumenta el nivel de tu cerradura para que tu casa esté segura!\nEscribe: 'lee y comprende las consecuencias' si lees todo. (es muy importante que lo leas o podrías perder tus bienes)");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Mahalagang abiso!\n1) Mag ipon ng pera sa loob ng iyong bahay upang bayaran ang mga bayarin...\nKung walang sapat na pera ang bahay mo para bayaran ang mga bayarin Mawawala sa iyo ang bahay\n\n2) Nakatanggap ka ng 3 alarma sa bahay, bumili ng mga alarma at dagdagan ang antas ng iyong lock para safe ang bahay mo!\nIsulat ang: 'I read and understand the consequences' kung nabasa mo ang lahat! (Ito ay napakahalaga na mabasa mo o maaari mong mawala ang iyong mga ari arian)");
    }
    ShowPlayerDialog(playerid,91,DIALOG_STYLE_INPUT,"Buy House ImportantWarning:",string,"Ok","");
}
forward MSG_IMPORTANT_BUY_BIZZ(playerid);
public MSG_IMPORTANT_BUY_BIZZ(playerid) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Aviso importante!\nGuardar dinheiro dentro de sua empresa para pagar as contas...\nSe sua casa não tiver o sucifiente para pagar as contas você irá perder a empresa\n\nEscreva: 'li e entendo as consequencias' se você leu tudo! (ï¿½ muito importante que você leia ou poderá perder seus bens)");
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Important notice!\nSave money inside your company to pay the bills...\nIf your house doesn't have enough to pay the bills you will lose the company\n\nWrite: 'i read and understand the consequences' if You read everything ! (It is very important that You read this or you could lose your assets)");
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Aviso importante!\nAhorre dinero dentro de su empresa para pagar las facturas...\nSi su casa no tiene suficiente para pagar las facturas perderá la empresa\n\nEscriba: 'Leí y entiendo las consecuencias' si lee ¡todo! (es muy importante que lo leas o podrías perder tus bienes)");
    }
    else if(idiom[playerid] == 4) {
        format(string,sizeof(string),"Mahalagang abiso!\nMag ipon ng pera sa loob ng iyong kumpanya upang bayaran ang mga bayarin...\nKung ang iyong kumpanya ay walang sapat na pera upang bayaran ang mga bayarin mawawala ka sa kumpanya\n\nIsulat ang: 'I read and understand the consequences' kung nabasa mo ang lahat! (Ito ay napakahalaga na mabasa mo o maaari mong mawala ang iyong mga ari arian)");
    }
    ShowPlayerDialog(playerid,94,DIALOG_STYLE_INPUT,"Buy Bizz ImportantWarning:",string,"Ok","");
}
forward MSG_IMPORTANT_SELL_HOUSE(playerid, sellValue);
public MSG_IMPORTANT_SELL_HOUSE(playerid, sellValue) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Aviso importante!\nvocê está prestes a vender sua casa para o governo pelo valor de %i$\nEscreva: 'li e entendo as consequencias' se você leu tudo! (é muito importante que você leia ou poderá perder seus bens)", sellValue);
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Important notice!\nYou are about to sell your house to the government for %i$\nPlease write: 'I read and understand the consequences' if you read everything! (It is very important that you read or you may lose your assets)", sellValue);
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Aviso importante!\nEstá a punto de vender su casa al gobierno por %i$\nPor favor, escriba: 'Leí y comprendo las consecuencias' si lee todo. (es muy importante que lo leas o podrías perder tus bienes)", sellValue);
    }
    ShowPlayerDialog(playerid,433,DIALOG_STYLE_INPUT,"Sell House ImportantWarning:",string,"Ok","");
}
forward MSG_IMPORTANT_SELL_VEHICLE(playerid, sellValue);
public MSG_IMPORTANT_SELL_VEHICLE(playerid, sellValue) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Aviso importante!\nVocê está prestes a vender seu veiculo para o governo pelo valor de %i$\nEscreva: 'li e entendo as consequencias' se você leu tudo! (é muito importante que você leia ou poderá perder seus bens)", sellValue);
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Important notice!\nYou are about to sell your vehicle to the government for %i$\nPlease write: 'i read and understand the consequences' if You read everything! (It is very important that you read it or you could lose your assets)", sellValue);
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Aviso importante!\nEstá a punto de vender su vehículo al gobierno por %i$\nPor favor, escriba: 'leí y entiendo las consecuencias' si lee todo. (es muy importante que lo leas o podrías perder tus bienes)", sellValue);
    }
    ShowPlayerDialog(playerid,431,DIALOG_STYLE_INPUT,"Sell Vehicle ImportantWarning:",string,"Ok","");
}
forward MSG_IMPORTANT_SELL_BIZZ(playerid, sellValue);
public MSG_IMPORTANT_SELL_BIZZ(playerid, sellValue) {
    new string[1024];
    if(idiom[playerid] == 1) {
        format(string,sizeof(string),"Aviso importante!\nVocê está prestes a vender sua empresa para o governo pelo valor de %i$\nEscreva: 'li e entendo as consequencias' se você leu tudo! (ï¿½ muito importante que você leia ou poderá perder seus bens)", sellValue);
    }
    else if(idiom[playerid] == 2) {
        format(string,sizeof(string),"Important notice!\nYou are about to sell your company to the government for %i$\nPlease write: 'i read and understand the consequences' if You read everything! (It is very important that you read it or you could lose your assets)", sellValue);
    }
    else if(idiom[playerid] == 3) {
        format(string,sizeof(string),"¡Aviso importante!\nEstá a punto de vender su empresa al gobierno por %i$\nEscriba: 'Leí y comprendo las consecuencias' si lee todo. (es muy importante que lo leas o podrías perder tus bienes)", sellValue);
    }
    ShowPlayerDialog(playerid,432,DIALOG_STYLE_INPUT,"Sell Vehicle ImportantWarning:",string,"Ok","");
}
forward MSG_NoWalletMoneyLaudry(playerid);
public MSG_NoWalletMoneyLaudry(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você não tem Dinheiro Sujo (WALLET) para lavar nesse negocio!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You don't have Dirty Money (WALLET) to launder in this business!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡Usted no tiene Dinero Sucio (WALLET) para lavar en este negocio!");
    }
}
forward MSG_NoBelt(playerid, danoplayerbatida);
public MSG_NoBelt(playerid, danoplayerbatida) {
    new dmgstring[24];
    if(idiom[playerid] == 1)
        format(dmgstring, sizeof(dmgstring), "~w~(SEM-CINTO) ~r~%i.0", danoplayerbatida );
    else if(idiom[playerid] == 2)
        format(dmgstring, sizeof(dmgstring), "~w~(WITHOUT-BELT) ~r~%i.0", danoplayerbatida );
    else if(idiom[playerid] == 3)
        format(dmgstring, sizeof(dmgstring), "~w~(SIN-CINTURON) ~r~%i.0", danoplayerbatida );
    GameTextForPlayerEx(playerid, dmgstring, 1000, 3);
}
forward MSG_NoBeltDmg(playerid, danoplayerbatida);
public MSG_NoBeltDmg(playerid, danoplayerbatida) {
    // GameTextForPlayerEx
    new dmgstring[24];
    if(idiom[playerid] == 1)
        format(dmgstring, sizeof(dmgstring), "~w~(SEM-CINTO) ~r~%i.0", danoplayerbatida );
    else if(idiom[playerid] == 2)
        format(dmgstring, sizeof(dmgstring), "~w~(WITHOUT-BELT) ~r~%i.0", danoplayerbatida );
    else if(idiom[playerid] == 3)
        format(dmgstring, sizeof(dmgstring), "~w~(SIN-CINTURON) ~r~%i.0", danoplayerbatida );
    GameTextForPlayerEx(playerid, dmgstring, 1000, 3);
    // SendClientMessage
    if(IsAndroidPlayer(playerid) == true)
    {
        if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Aperte ~y~L-F~w~para usar o Cinto de Segurança!");
        else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "Press ~y~L-F~w~to wear your Seat Belt!");
        else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Presiona ~y~L-F~w~para usar tu Cinturón de Seguridad!");
    }
    else
    {
        if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Aperte ~y~L-CTRL~w~para usar o Cinto de Segurança!");
        else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "Press ~y~L-CTRL~w~to wear your Seat Belt!");
        else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡Presiona ~y~L-CTRL~w~para usar tu Cinturón de Seguridad!");
    }
}
forward MSG_BikeFallDmg(playerid, bool:withHelmet, falldmg);
public MSG_BikeFallDmg(playerid, bool:withHelmet, falldmg) {
    new dmgstring[32];
    if(withHelmet == false)
    {
        if(idiom[playerid] == 1)
            format(dmgstring, sizeof(dmgstring), "~w~(SEM-CAPACETE) ~r~%i.0", falldmg );
        else if(idiom[playerid] == 2)
            format(dmgstring, sizeof(dmgstring), "~w~(WITHOUT-HELMET) ~r~%i.0", falldmg );
        else if(idiom[playerid] == 3)
            format(dmgstring, sizeof(dmgstring), "~w~(SIN-CASCO) ~r~%i.0", falldmg );
    }
    else
    {
        if(idiom[playerid] == 1)
            format(dmgstring, sizeof(dmgstring), "~w~(COM-CAPACETE) ~r~%i.0", falldmg );
        else if(idiom[playerid] == 2)
            format(dmgstring, sizeof(dmgstring), "~w~(WITH-HELMET) ~r~%i.0", falldmg );
        else if(idiom[playerid] == 3)
            format(dmgstring, sizeof(dmgstring), "~w~(CON-CASCO) ~r~%i.0", falldmg );
    }
    GameTextForPlayerEx(playerid, dmgstring, 1000, 3);
}
forward MSG_AddVipDays(playerid, days);
public MSG_AddVipDays(playerid, days) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Você recebeu %i dias de VIP! Aproveite as vantagens descritas no comando /shop", days);
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "You have received %i days of VIP! Take advantage of the advantages described in the /shop command", days);
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡Ha recibido %i días de VIP! Aprovecha las ventajas descritas en el comando /shop", days);
    }
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_RefferExplain(playerid);
public MSG_RefferExplain(playerid) {
    if(idiom[playerid] == 1)      { ShowPlayerDialog(playerid,28, DIALOG_STYLE_INPUT, "Reffer", "Algum jogador te chamou para jogar aqui?\n- se não? Deixe essa caixa em branco.\n- se sim? Coloque o nome dele no jogo na caixa!\n\n\nChame pessoas para jogar e receba recompensas assim que o seu convidado conseguir alguns pontos de experiencia\n====================================\n100 exp = 3 VIP DAYS\n200 exp = 5 VIP DAYS\n300 exp = 7 VIP DAYS\n====================================", "Yes", "No"); }
    else if(idiom[playerid] == 2) { ShowPlayerDialog(playerid,28, DIALOG_STYLE_INPUT, "Reffer", "Did any player invite you to play here?\n- if not? Leave this box blank.\n- if yes? Put his in-game name on the box!\n\n\nCall people to play and get rewards as soon as your guest gets some experience points\n=================== ===================\n100 exp = 3 VIP DAYS\n200 exp = 5 VIP DAYS\n300 exp = 7 VIP DAYS\n========== ==================================", "Yes", "No"); }
    else if(idiom[playerid] == 3) { ShowPlayerDialog(playerid,28, DIALOG_STYLE_INPUT, "Reffer", "¡Algï¿½n jugador te invitï¿½ a jugar aquï¿½?\n- si no? Deje esta casilla en blanco.\n- si es asï¿½? ï¿½Pon su nombre en el juego en la caja!\n\n\nLlama a la gente para jugar y obtï¿½n recompensas tan pronto como tu invitado obtenga algunos puntos de experiencia\n================= == ===================\n100 exp = 3 Dï¿½AS VIP\n200 exp = 5 Dï¿½AS VIP\n300 exp = 7 Dï¿½AS VIP\n====== ==== ==================================", "Yes", "No"); }
}
forward MSG_WinLottery(playerid, premioValue, lotericaId);
public MSG_WinLottery(playerid, premioValue, lotericaId) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Você ganhou o premio de %i$ na loterica %i! vá lá buscar! /gpsbizz %i", premioValue, lotericaId, lotericaId);
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "You won the %i$ prize in the %i lottery! Go get it! /gpsbizz %i", premioValue, lotericaId, lotericaId);
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡Has ganado el premio %i$ en la loterï¿½a %i! ï¿½Ve a buscarlo! /gpsbizz %i", premioValue, lotericaId, lotericaId);
    }
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_YourLastVehicleWasntABoat(playerid);
public MSG_YourLastVehicleWasntABoat(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "O último veiculo que você pilotou não era um BARCO!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "The last vehicle you piloted was NOT a BOAT!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡El último vehículo que pilotaste no fue un BARCO!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_GzCapturedInfo(playerid);
public MSG_GzCapturedInfo(playerid) {
    new string[512];
    if(idiom[playerid] == 1) format(string,sizeof(string),"Sua facção dominou um territorio!\n\nTodos os membros ganham um valor no PayDay por manter essa GangZone, se essa GangZone for bem administrada ela pode ser muito lucrativa pra você...\n\n- o lucro aumenta a cada tipo de droga no estoque da GangZone (quanto maior a variedade de drogas, maior o lucro)\n- gangzones fechadas pela policia dão metade do lucro\n- cada droga vendida o dinheiro vai pro cofre da facção\n- se outra facção dominar seu terrotorio todos as drogas do estoque da GangZone vão para o cofre da sua facção");
    else if(idiom[playerid] == 2) format(string,sizeof(string),"Your faction has dominated a territory!\n\nAll members earn a PayDay fee for maintaining this GangZone, if this GangZone is well managed it can be very profitable for you...\n\n- the profit increases with each type of drug in the GangZone stock (the greater the variety of drugs, the greater the profit)\n- gangzones closed by the police give half the profit\n- each drug sold, the money goes to the faction's vault\n- if another faction dominates your territory, all the drugs in GangZone's stockpile go to your faction's vault");
    else if(idiom[playerid] == 3) format(string,sizeof(string),"¡Tu facción ha dominado un territorio!\n\nTodos los miembros ganan una tarifa de PayDay por mantener esta GangZone, si esta GangZone está bien administrada, puede ser muy rentable para usted...\n\n- la ganancia aumenta con cada tipo de droga en el stock de GangZone (cuanto mayor sea la variedad de medicamentos, mayor será la ganancia)\n- las gangzone cerradas por la policia dan la mitad de la ganancia\n- cada droga vendida, el dinero va a la bóveda de la facción\n- si otra facción domina tu territorio, todas las drogas en la reserva de GangZone van a la bóveda de tu facción");
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"GZ CAPTURED INFO",string,"Ok","");
}
forward MSG_VipBenefits_Account(playerid);
public MSG_VipBenefits_Account(playerid) {
    new string[128], final[1024];

    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Beneficios de Conta VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução 30%% de todos os danos recebidos");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução 30%% de tempo para realizar as ações novamente de todas as ações do servidor");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de vicio 2 vezes mais rapido");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de bonus em todas as barras de progresso");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de redução do valor reduzido ao ser assaltado");
        strcat(final, string);

        format(string, sizeof(string), "\n- menos tempo caido/morto no hospital");
        strcat(final, string);

        format(string, sizeof(string), "\n- menos tempo preso e sequestro");
        strcat(final, string);

        format(string, sizeof(string), "\n- mais cinquenta por cento de salario no PayDay");
        strcat(final, string);

        format(string, sizeof(string), "\n- mais um skill por PayDay");
        strcat(final, string);

        format(string, sizeof(string), "\n- menor porcentagem na perda de SKILL ao morrer");
        strcat(final, string);

        format(string, sizeof(string), "\n\n e muitas outras!");
        strcat(final, string);
    }

    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "VIP Account Benefits");
        strcat(final, string);

        format(string, sizeof(string), "\n- 30%% reduction of all damage taken");
        strcat(final, string);

        format(string, sizeof(string), "\n- 30%% reduction of time to perform actions again of all server actions");
        strcat(final, string);

        format(string, sizeof(string), "\n- 2 times faster addiction reduction");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% bonus on all progress bars");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction of value reduced when being robbed");
        strcat(final, string);

        format(string, sizeof(string), "\n- less time down/dead in hospital");
        strcat(final, string);

        format(string, sizeof(string), "\n- less jail time and kidnapping");
        strcat(final, string);

        format(string, sizeof(string), "\n- plus fifty percent of salary on PayDay");
        strcat(final, string);

        format(string, sizeof(string), "\n- one more skill by PayDay");
        strcat(final, string);

        format(string, sizeof(string), "\n- lower percentage of SKILL loss on death");
        strcat(final, string);

        format(string, sizeof(string), "\n\n and many others!");
        strcat(final, string);
    }

    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Beneficios de la cuenta VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- 30%% de reducción de todo el daño recibido");
        strcat(final, string);

        format(string, sizeof(string), "\n- 30%% de reducción del tiempo para realizar acciones nuevamente de todas las acciones del servidor");
        strcat(final, string);

        format(string, sizeof(string), "\n- Reducción de adicciones 2 veces más rápida");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de bonificación en todas las barras de progreso");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de reducción del valor reducido al ser robado");
        strcat(final, string);

        format(string, sizeof(string), "\n- menos tiempo de inactividad/muerte en el hospital");
        strcat(final, string);

        format(string, sizeof(string), "\n- menos tiempo en la cárcel y secuestro");
        strcat(final, string);

        format(string, sizeof(string), "\n- más el cincuenta por ciento del salario en PayDay");
        strcat(final, string);

        format(string, sizeof(string), "\n- una habilidad más por PayDay");
        strcat(final, string);

        format(string, sizeof(string), "\n- menor porcentaje de pérdida de HABILIDAD al morir");
        strcat(final, string);

        format(string, sizeof(string), "\n\n ¡y muchos otros!");
        strcat(final, string);
    }

    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"ACC VIP Benefits:",final,"Ok","");
}
forward MSG_VipBenefits_Vehicle(playerid);
public MSG_VipBenefits_Vehicle(playerid) {
    new string[128], final[1024];

    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Beneficios de Veículo VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- acesso aos slots 10,11,12,13,14,15,16,17,18,19,20 de portamalas");
        strcat(final, string);

        format(string, sizeof(string), "\n- limite de gasolina 3x maior");
        strcat(final, string);

        format(string, sizeof(string), "\n- gasolina metade do preço");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de metade do preço para alarmes");
        strcat(final, string);

        format(string, sizeof(string), "\n- acesso aos níveis 6,7,8,9,10 de alarme");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de metade do preço para fechaduras");
        strcat(final, string);

        format(string, sizeof(string), "\n- acesso aos níveis 6,7,8,9,10 de fechaduras");
        strcat(final, string);
    }

    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "VIP Vehicle Benefits");
        strcat(final, string);

        format(string, sizeof(string), "\n- access to trunk slots 10,11,12,13,14,15,16,17,18,19,20");
        strcat(final, string);

        format(string, sizeof(string), "\n- 3x higher gas limit");
        strcat(final, string);

        format(string, sizeof(string), "\n- gas half price");
        strcat(final, string);

        format(string, sizeof(string), "\n- half price reduction for alarms");
        strcat(final, string);

        format(string, sizeof(string), "\n- access to alarm levels 6,7,8,9,10");
        strcat(final, string);

        format(string, sizeof(string), "\n- half price reduction for locks");
        strcat(final, string);

        format(string, sizeof(string), "\n- access to levels 6,7,8,9,10 of locks");
        strcat(final, string);
    }

    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Beneficios de vehículos VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- acceso a las ranuras del maletero 10,11,12,13,14,15,16,17,18,19,20");
        strcat(final, string);

        format(string, sizeof(string), "\n- Límite de gas 3 veces más alto");
        strcat(final, string);

        format(string, sizeof(string), "\n- gasolina a mitad de precio");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción a mitad de precio para alarmas");
        strcat(final, string);

        format(string, sizeof(string), "\n- acceso a niveles de alarma 6,7,8,9,10");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción a mitad de precio para cerraduras");
        strcat(final, string);

        format(string, sizeof(string), "\n- acceso a los niveles 6,7,8,9,10 de esclusas");
        strcat(final, string);
    }

    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"VEH VIP Benefits:",final,"Ok","");
}
forward MSG_VipBenefits_House(playerid);
public MSG_VipBenefits_House(playerid) {
    new string[128], final[1024];

    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Beneficios de House VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- dobro de slots de armario da casa (acesso aos slots B)");
        strcat(final, string);

        format(string, sizeof(string), "\n- dinheiro perdido em roubo dividido na metade");
        strcat(final, string);

        format(string, sizeof(string), "\n- dinheiro das taxas PayDay dividido na metade");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de redução na apreensão de materiais,drogas");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de metade do preço para fechaduras");
        strcat(final, string);

        format(string, sizeof(string), "\n- acesso aos níveis 6,7,8,9,10 de fechaduras");
        strcat(final, string);
    }

    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "Benefits of House VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- double the house closet slots (access to B slots)");
        strcat(final, string);

        format(string, sizeof(string), "\n- money lost in theft divided in half");
        strcat(final, string);

        format(string, sizeof(string), "\n- money from PayDay fees divided in half");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction in the seizure of materials, drugs");
        strcat(final, string);

        format(string, sizeof(string), "\n- half price reduction for locks");
        strcat(final, string);

        format(string, sizeof(string), "\n- access to levels 6,7,8,9,10 of locks");
        strcat(final, string);
    }

    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Beneficios de la Casa VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- duplicar las ranuras del armario de la casa (acceso a las ranuras B)");
        strcat(final, string);

        format(string, sizeof(string), "\n- dinero perdido en robo dividido por la mitad");
        strcat(final, string);

        format(string, sizeof(string), "\n- dinero de las tarifas de PayDay dividido por la mitad");
        strcat(final, string);

        format(string, sizeof(string), "\n- Reducción del 50%% en el decomiso de materiales, drogas");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción a mitad de precio para cerraduras");
        strcat(final, string);

        format(string, sizeof(string), "\n- acceso a los niveles 6,7,8,9,10 de esclusas");
        strcat(final, string);
    }

    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"House VIP Benefits:",final,"Ok","");
}
forward MSG_VipBenefits_Faction(playerid);
public MSG_VipBenefits_Faction(playerid) {
    new string[128], final[1024];

    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Beneficios de Faction VIP");
        strcat(final, string);

        format(string,sizeof(string),"\nPossibilidade de gerenciar os slots de membros 10,11,12,13,14,15");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de 50%% da taxa por PayDay (se a casa também for VIP chega a 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de 50%% da valor roubado por outros jogadores (se a casa também for VIP chega a 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de 30%% no uso de material de armas para equipar no cofre HQ");
        strcat(final, string);

        format(string, sizeof(string), "\n- liberado uso de armas do upgrade de nível 3");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de redução na apreensão de materiais,drogas (se a casa também for VIP chega a 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de redução no sistema de queimar dinheiro do cofre");
        strcat(final, string);
    }

    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "Faction VIP benefits");
        strcat(final, string);

        format(string,sizeof(string),"\nPossibility to manage member slots 10,11,12,13,14,15");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction of the PayDay fee (if the house is also a VIP, it reaches 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction of the amount stolen by other players (if the house is also a VIP, it reaches 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- 30%% reduction in weapon material usage to equip in the HQ vault");
        strcat(final, string);

        format(string, sizeof(string), "\n- unlocked use of level 3 upgrade weapons");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction in the apprehension of materials, drugs (if the house is also a VIP, it reaches 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction in the system of burning money from the vault");
        strcat(final, string);
    }

    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Beneficios VIP de facción");
        strcat(final, string);

        format(string,sizeof(string),"\nPosibilidad de gestionar slots de miembros 10,11,12,13,14,15");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción del 50%% de la tarifa PayDay (si la casa también es VIP, llega al 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción del 50%% de la cantidad robada por otros jugadores (si la casa también es VIP, llega al 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- 30%% de reducción en el uso de material de armas para equipar en la bóveda de HQ");
        strcat(final, string);

        format(string, sizeof(string), "\n- uso desbloqueado de armas de mejora de nivel 3");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción del 50%% en la aprehensión de materiales, drogas (si la casa también es VIP, llega al 75%%)");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de reducción en el sistema de quema de dinero de la bóveda");
        strcat(final, string);
    }

    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Faction VIP Benefits:",final,"Ok","");
}
forward MSG_VipBenefits_Bizz(playerid);
public MSG_VipBenefits_Bizz(playerid) {
    new string[128], final[1024];

    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Beneficios de Bizz VIP");
        strcat(final, string);

        format(string, sizeof(string), "\n- 3x limite de produtos");
        strcat(final, string);

        format(string, sizeof(string), "\n- 3x chamar caminhoneiros com menos de 100 em vez de menos de 30");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de 50%% da taxa paga por PayDay da bizz");
        strcat(final, string);

        format(string, sizeof(string), "\n- redução de 50%% da taxa de roubo quando a empresa nao tiver protective points.");
        strcat(final, string);
    }

    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "Bizz VIP benefits");
        strcat(final, string);

        format(string, sizeof(string), "\n- 3x product limit");
        strcat(final, string);

        format(string, sizeof(string), "\n- 3x call truckers under 100 instead of under 30");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction of the fee paid by PayDay from bizz");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% reduction in the theft rate when the company has no protective points.");
        strcat(final, string);
    }

    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Beneficios VIP de Bizz");
        strcat(final, string);

        format(string, sizeof(string), "\n- límite de producto 3x");
        strcat(final, string);

        format(string, sizeof(string), "\n- 3x camioneros de llamadas menores de 100 en lugar de menores de 30");
        strcat(final, string);

        format(string, sizeof(string), "\n- 50%% de reducción de la tarifa pagada por PayDay de bizz");
        strcat(final, string);

        format(string, sizeof(string), "\n- reducción del 50%% en la tasa de hurto cuando la empresa no dispone de puntos de protección.");
        strcat(final, string);
    }

    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"BIZZ VIP Benefits:",final,"Ok","");
}
forward MSG_HouseVIPBlockSlotB(playerid);
public MSG_HouseVIPBlockSlotB(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Os slots 'B' só estão disponíveis para CASAS VIP!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "'B' slots are only available for VIP HOUSES!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡Las tragamonedas 'B' solo están disponibles para CASAS VIP!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_CopsCantStoreWeaponOnHouse(playerid);
public MSG_CopsCantStoreWeaponOnHouse(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Policias não podem guardar armas em casa, para comenter corrupção guarde as armas num portamalas do carro.");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "Police officers can't keep guns at home, to commit corruption keep the guns in the trunk of the car.");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "Los policías no pueden tener armas en casa, para cometer actos de corrupción mantengan las armas en el baúl del auto.");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_NeedFactionsMembersClooser(playerid, numNeed);
public MSG_NeedFactionsMembersClooser(playerid, numNeed) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Você precisa de %i membros da sua facção perto de você para usar esse comando!", numNeed );
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "You need %i members of your faction near you to use this command!", numNeed );
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡Necesitas %i miembros de tu facción cerca de ti para usar este comando!", numNeed );
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_Cuffed(playerid, targetid);
public MSG_Cuffed(playerid, targetid) {
    // playerid
    if(idiom[playerid] == 1) {
        GameTextForPlayerEx(playerid, "~b~ALGEMADO", 2500, 3);
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Agora aperte 'H' em uma viatura proximo ao suspeito para dete-lo.");
    }
    else if(idiom[playerid] == 2) {
        GameTextForPlayerEx(playerid, "~b~CUFFED", 2500, 3);
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Now press 'H' on a car next to the suspect to stop him.");
    }
    else if(idiom[playerid] == 3) {
        GameTextForPlayerEx(playerid, "~b~ESPOSADO", 2500, 3);
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Ahora presione 'H' en un automóvil al lado del sospechoso para detenerlo.");
    }
    // targetid
    if(idiom[targetid] == 1) {
        GameTextForPlayerEx(targetid, "~b~ALGEMADO", 2500, 3);
        SendClientMessage(targetid, COLOR_LIGHTRED, "Você está sendo preso, não deslogue ou pause enquanto estiver algemado ou sera severamente punido.");
    }
    else if(idiom[targetid] == 2) {
        GameTextForPlayerEx(targetid, "~b~CUFFED", 2500, 3);
        SendClientMessage(targetid, COLOR_LIGHTRED, "You are being arrested, do not log off or pause while you are handcuffed or you will be severely punished.");
    }
    else if(idiom[targetid] == 3) {
        GameTextForPlayerEx(targetid, "~b~ESPOSADO", 2500, 3);
        SendClientMessage(targetid, COLOR_LIGHTRED, "Está siendo arrestado, no cierre la sesión ni haga una pausa mientras está esposado o será severamente castigado.");
    }
}
forward MSG_CuffedInIntType(playerid, targetid);
public MSG_CuffedInIntType(playerid, targetid) {
    // playerid
    if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Esse jogador será jogado para fora do interior automaticamente em 5 segundos.");
    else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "That player will be thrown out of the interior automatically in 5 seconds.");
    else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "Ese jugador será expulsado del interior automáticamente en 5 segundos.");
    // targetid
    if(idiom[targetid] == 1) SendClientMessage(targetid, COLOR_LIGHTRED, "Saia antes para não ficar preso na mesma posição e ja vai preparando a viatura.");
    else if(idiom[targetid] == 2) SendClientMessage(targetid, COLOR_LIGHTRED, "Get out beforehand so you don't get stuck in the same position and get the car ready.");
    else if(idiom[targetid] == 3) SendClientMessage(targetid, COLOR_LIGHTRED, "Sal antes para no quedarte atascado en la misma posición y prepara el coche.");
}
forward MSG_ThrowCuffedInIntType(playerid);
public MSG_ThrowCuffedInIntType(playerid) {
    if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Meliante arrastado para fora do interior.");
    else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Miscreant dragged out of the interior.");
    else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Meliante arrastado para foros de interior.");
}
forward MSG_CantUseCommandInYourself(playerid);
public MSG_CantUseCommandInYourself(playerid) {
    if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Você não pode usar esse comando em você mesmo!");
    else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "You cannot use this command on yourself!");
    else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "¡No puedes usar este comando en ti mismo!");
}
forward MSG_LimitSampVehicle(playerid);
public MSG_LimitSampVehicle(playerid) {
    SendClientMessage(playerid, COLOR_LIGHTRED, "The server reach the SAMP VEHICLE LIMIT!");
}
forward MSG_NoRentVehiclesOffClooser(playerid);
public MSG_NoRentVehiclesOffClooser(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Não tem nenhum veículo de ALUGUEL DESLIGADO perto de voce para voce guinchar!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "There are no OFF RENTAL vehicles near you for you to tow!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡No hay vehículos FUERA DE ALQUILER cerca de usted para remolcar!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_NoTowedVehicle(playerid);
public MSG_NoTowedVehicle(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Você não tem nenhum veículo guinchado para rebocar!");
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "You don't have any towed vehicles to tow!");
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "¡No tienes vehículos remolcados para remolcar!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DismantleKeysSucess(playerid);
public MSG_DismantleKeysSucess(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Você desmanchou a chave de veículo roubado que você tinha!");
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "- não deve mais nada a policia e aos bandidos, seu sistema de combate voltou ao normal.");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "You dismantled the stolen vehicle key you had!");
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "- you no longer owes the police and the bandits anything, his combat system has returned to normal.");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "¡Desmantelaste la llave del vehículo robado que tenías!");
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "- ya no le debes nada a la policía ni a los bandidos, su sistema de combate ha vuelto a la normalidad.");
    }
}
forward MSG_DismantleKeysFail(playerid);
public MSG_DismantleKeysFail(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você não tem nenhuma chave de veículo roubado para desmanchar aqui.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- para remontar um veículo aperte 'H' ao invés de 'Y'");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You don't have any stolen vehicle keys to dismantle here.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- to reassemble a vehicle press 'H' instead of 'Y'");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "No tienes ninguna llave de vehículo robada para desmantelar aquí.");
        SendClientMessage(playerid, COLOR_LIGHTRED, "- para volver a montar un vehículo, presione 'H' en lugar de 'Y'");
    }
}
forward MSG_CantWalkHandsup(playerid);
public MSG_CantWalkHandsup(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você não pode andar enquanto RENDIDO!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Pressione 'F' ou digite '/f' para parar o HANDSUP.");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You can not walk while HANDSUP!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Press 'F' or type '/f' to stop HANDSUP.");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡No puedes caminar mientras estás RENDERIZADO!");
        SendClientMessage(playerid, COLOR_LIGHTRED, "Presione 'F' o escriba '/f' para detener RENDERED.");
    }
}
forward MSG_CantWalkFreezed(playerid);
public MSG_CantWalkFreezed(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "Você não pode andar enquanto CONGELADO!");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "You can not walk while FROZEN!");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTRED, "¡No puedes caminar mientras estás RENDERIZADO!");
    }
}
forward MSG_TutorialJob(playerid, jobid);
public MSG_TutorialJob(playerid, jobid) {
    new str[100], final[3500];
    if(jobid == 1) { // motorista de onibus
        if(idiom[playerid] == 1)
        {
            format(str, sizeof(str), "{FFFFFF}Para trabalhar de Motorista de Onibus: faça BLA, aperte BLA");
            strcat(final, str);
        }
        else if(idiom[playerid] == 2)
        {

        }
        else if(idiom[playerid] == 3)
        {

        }
    }
    else if(jobid == 2) { // motoboy

    }
    else if(jobid == 3) { // pescador
        format(str,sizeof(str),"Procure uma 24/7 para comprar 'Vara de Pesca' e 'Iscas' depois um 'Aluguel de Barcos' para pescar em alto mar!");
    }
    else if(jobid == 4) { // mecanico

    }
    else if(jobid == 5) { // advogado

    }
    else if(jobid == 6) { // piloto de avião

    }
    else if(jobid == 7) { // prostituta

    }
    else if(jobid == 8) { // detetive

    }
    else if(jobid == 9) { // maquinista

    }
    else if(jobid == 10) { // caminhoneiro

    }
    else if(jobid == 11) { // minerador

    }
    else if(jobid == 12) { // pirata

    }
    else if(jobid == 13) { // lenhador

    }
    else if(jobid == 14) { // ladrão de veiculos

    }
    else if(jobid == 15) { // fabricante de armas

    }
    ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"Job Help:",final,"Ok","");
}
forward MSG_NeedToBeAtLeastOnMissionId(playerid, missionid, playermission);
public MSG_NeedToBeAtLeastOnMissionId(playerid, missionid, playermission) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str, sizeof(str), "Para usar usar esse comando você precisa no mínimo ter passado pela MISSÃO ID: %i, você está na %i. (use: /missao)", missionid, playermission);
    }
    else if(idiom[playerid] == 2) {
        format(str, sizeof(str), "In order to use this command you must at least have passed the MISSION ID: [%i]. (use: /mission)", missionid, playermission);
    }
    else if(idiom[playerid] == 3) {
        format(str, sizeof(str), "Para usar este comando, debe haber pasado al menos la ID DE LA MISIÓN: [%i]. (uso: /mision)", missionid, playermission);
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_CantCkThisPlayer(playerid);
public MSG_CantCkThisPlayer(playerid) {
    new str[128], final[3500];
    if(idiom[playerid] == 1)
    {
        format(str, sizeof(str), "{FFFFFF}Esse jogador não pode tomar CK, para um jogador tomar CK ele precisa ter uma dessas condições:");
        strcat(final, str);
        format(str, sizeof(str), "\n- ter te prendido nesse PayDay");
        strcat(final, str);
        format(str, sizeof(str), "\n- ter te matado sem te finalizar nesse PayDay");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar dentro de uma GangZone");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar cometendo corrupção");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar muito procurado (nome vermelho ou cinza)");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar amarrado por uma corda");
        strcat(final, str);
    }
    else if(idiom[playerid] == 2)
    {
        format(str, sizeof(str), "{FFFFFF}This player cannot take CK, for a player to take CK he must have one of these conditions:");
        strcat(final, str);
        format(str, sizeof(str), "\n- have arrested you on this PayDay");
        strcat(final, str);
        format(str, sizeof(str), "\n- to have killed you without finishing you on this PayDay");
        strcat(final, str);
        format(str, sizeof(str), "\n- be inside a GangZone");
        strcat(final, str);
        format(str, sizeof(str), "\n- be committing corruption");
        strcat(final, str);
        format(str, sizeof(str), "\n- be highly sought after (red or gray name)");
        strcat(final, str);
        format(str, sizeof(str), "\n- be tied by a rope");
        strcat(final, str);
    }
    else if(idiom[playerid] == 3)
    {
        format(str, sizeof(str), "{FFFFFF}Este jugador no puede tomar CK, para que un jugador tome CK debe tener una de estas condiciones:");
        strcat(final, str);
        format(str, sizeof(str), "\n- te han arrestado en este día de pago");
        strcat(final, str);
        format(str, sizeof(str), "\n- haberte matado sin acabar contigo en este PayDay");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar dentro de una GangZone");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar cometiendo corrupción");
        strcat(final, str);
        format(str, sizeof(str), "\n- ser muy buscado (nombre rojo o gris)");
        strcat(final, str);
        format(str, sizeof(str), "\n- estar atado por una cuerda");
        strcat(final, str);
    }
}
forward MSG_InvestigationPhoto(killerONid, bool:isDeathCK);
public MSG_InvestigationPhoto(killerONid, bool:isDeathCK) {
    new string[128];
    if(isDeathCK == false) {
        if(idiom[killerONid] == 1) format(string, sizeof(string), "[Investigação do FBI] Um corpo foi encontrado e você era culpado do assassinato");
        else if(idiom[killerONid] == 2) format(string, sizeof(string), "[FBI Investigation] A body was found and you were guilty of the murder");
        else if(idiom[killerONid] == 3) format(string, sizeof(string), "[Investigación del FBI] Se encontró un cuerpo y usted era culpable del asesinato");
    }
    else {
        if(idiom[killerONid] == 1) format(string, sizeof(string), "[Investigação do FBI] Um corpo foi encontrado e você era culpado do assassinato BRUTAL");
        else if(idiom[killerONid] == 2) format(string, sizeof(string), "[FBI Investigation] A body was found and you were guilty of the BRUTAL murder");
        else if(idiom[killerONid] == 3) format(string, sizeof(string), "[Investigación del FBI] Se encontró un cuerpo y usted era culpable del asesinato BRUTAL");
    }
    SendClientMessage(killerONid, COLOR_LIGHTRED, string);
}
stock STR_AnimDialogMenu(playerid) {
    new string[128];
    if(idiom[playerid] == 1) {
        format(string, sizeof(string), "Mãos pra cima\nPositivo\nNegativo\nOcioso\nSentado\nDançar\nApertar mãos (DUPLA)\nBeijar (DUPLA)\nSexo (DUPLA)\nTchau\n| LISTA DE ANIMAÇÃO |\n| AJUSTES |");
    }
    else if(idiom[playerid] == 2) {
        format(string, sizeof(string), "Hands up\nPositive\nNegative\nIdle\nSitting\nDancing\nShaking hands (DOUBLE)\nKissing (DOUBLE)\nSex (DOUBLE)\nBye\n| ANIM LIST |\n| SETTINGS |");
    }
    else if(idiom[playerid] == 3) {
        format(string, sizeof(string), "Manos arriba\nPositivo\nNegativo\nInactivo\nSentado\nBailando\nDándose la mano (DOBLE)\nBesando (DOBLE)\nSexo (DOBLE)\nAdiós\n| LISTA DE ANIMALES |\n| AJUSTES |");
    }
    return string;
}
forward MSG_ReagiuPraSerAlgemado(playerid);
public MSG_ReagiuPraSerAlgemado(playerid) {
    new string[128];
    if(idiom[playerid] == 1) format(string, sizeof(string), "[REAGIU A PRISÃO] Você não se rendeu antes de ser algemado e será punido em DINHEIRO e MAIS TEMPO PRESO por causa disso.");
    else if(idiom[playerid] == 2) format(string, sizeof(string), "[REACTED TO ARREST] You didn't surrender before you were handcuffed and you will be punished in CASH and MORE TIME IN PRISION for it.");
    else if(idiom[playerid] == 3) format(string, sizeof(string), "[REACCIONÓ AL ARRESTADO] No te rendiste antes de ser esposado y serás sancionado en EFECTIVO y MÁS TIEMPO EN PRISIÓN por ello.");
    SendClientMessage(playerid, COLOR_LIGHTRED, string);
}
forward MSG_LicenseCenterDialog(playerid);
public MSG_LicenseCenterDialog(playerid) {
    new string[256], porteprice, lterrestreprice, laeriaprice, portename[30], lterrestrename[30];
    if(lcArmas[playerid] == 0) {
        portename = "Civilian";
        porteprice = 5000;
    }
    else if(lcArmas[playerid] == 1) {
        portename = "LSPD";
        porteprice = 10000;
    }
    else if(lcArmas[playerid] == 2) {
        portename = "FBI";
        porteprice = 30000;
    }
    else if(lcArmas[playerid] == 3) {
        portename = "SWAT";
        porteprice = 50000;
    }
    else if(lcArmas[playerid] == 4) {
        portename = "GN";
        porteprice = 100000;
    }
    else if(lcArmas[playerid] == 5) {
        portename = "CIA";
        porteprice = 500000;
    }
    if(lcTerrestre[playerid] == 0) { // A = Motocicleta ~ Triciculo
        lterrestrename = "A - BIKES";
        lterrestreprice = 1500;
    }
    else if(lcTerrestre[playerid] == 1) { // B = Automovel
        lterrestrename = "B - CARS";
        lterrestreprice = 1500;
    }
    else if(lcTerrestre[playerid] == 2) { // C = Microonibus ~ Onibus
        lterrestrename = "C - BUS";
        lterrestreprice = 6000;
    }
    else if(lcTerrestre[playerid] == 3) { // D = Caminhão
        lterrestrename = "D - TRUCK";
        lterrestreprice = 15000;
    }
    else if(lcTerrestre[playerid] == 4) { // E = Caminhão com Carga
        lterrestrename = "E - TRUCK WITH TRAILER";
        lterrestreprice = 30000;
    }
    else if(lcTerrestre[playerid] == 5) { // F = Trem
        lterrestrename = "F - TRAIN";
        lterrestreprice = 60000;
    }
    else {
        lterrestrename = "ALREADY HAVE ALL";
    }
    if(lcAeria[playerid] == 0) laeriaprice = 15000; // A = Avião Pequeno
    else if(lcAeria[playerid] == 1) laeriaprice = 30000; // B = Avião Grande
    else if(lcAeria[playerid] == 2) laeriaprice = 60000; // B = Helicoptero

    if(lcArmas[playerid] <= 5) {
        if(idiom[playerid] == 1) format(string,sizeof(string),"Licença de Veiculos Terrestre %s (%i$)\nLicença Marítima (1000$)\nLicença Aérea (%i$)\n%s Porte de Armas (%i$)", lterrestrename, lterrestreprice, laeriaprice, portename, porteprice);
        else if(idiom[playerid] == 2) format(string,sizeof(string),"Land Vehicle License %s (%i$)\nMarine License (1000$)\nAir License (%i$)\n%s Possession of Arms (%i$)", lterrestrename, lterrestreprice, laeriaprice, portename, porteprice);
        else if(idiom[playerid] == 3) format(string,sizeof(string),"Licencia de Vehículo Terrestre %s (%i$)\nLicencia Marítima (1000$)\nLicencia Aérea (%i$)\n%s Posesión de Armas (%i$)", lterrestrename, lterrestreprice, laeriaprice, portename, porteprice);
    }
    else {
        if(idiom[playerid] == 1) format(string,sizeof(string),"Licença de Veiculos Terrestre %s (%i$)\nLicença Marítima (1000$)\nLicença Aérea (%i$)", lterrestrename, lterrestreprice, laeriaprice);
        else if(idiom[playerid] == 2) format(string,sizeof(string),"Ground License %s (%i$)\nMarine License (1000$)\nAir License (%i$)", lterrestrename, lterrestreprice, laeriaprice);
        else if(idiom[playerid] == 3) format(string,sizeof(string),"Licencia de Vehículo Terrestre %s (%i$)\nLicencia Marítima (1000$)\nLicencia Aérea (%i$)", lterrestrename, lterrestreprice, laeriaprice);
    }
    ShowPlayerDialog(playerid, 16, DIALOG_STYLE_LIST, "LICENSES CENTER MENU", string, "Select", "Cancel");
}
forward MSG_CantStoreMeleeGunTrunk(playerid);
public MSG_CantStoreMeleeGunTrunk(playerid) {
    new string[128];
    if(idiom[playerid] == 1) format(string, sizeof(string), "Você não pode guardar uma arma branca no porta malas!");
    else if(idiom[playerid] == 2) format(string, sizeof(string), "You can't keep a melee weapon in your trunk!");
    else if(idiom[playerid] == 3) format(string, sizeof(string), "¡No puedes guardar un arma cuerpo a cuerpo en tu baúl!");
    SendClientMessage(playerid, COLOR_LIGHTRED, string);
}
forward MSG_CantKillOnP2(playerid, targetid);
public MSG_CantKillOnP2(playerid, targetid) {
    new string[128];
    if(idiom[playerid] == 1) format(string, sizeof(string), "Você não pode matar um jogador de P2");
    else if(idiom[playerid] == 2) format(string, sizeof(string), "You cannot kill a P2 player");
    else if(idiom[playerid] == 3) format(string, sizeof(string), "No puedes matar a un jugador P2");
    SendClientMessage(playerid, COLOR_LIGHTRED, string);
    if(GetPlayerState(targetid) == PLAYER_STATE_DRIVER || GetPlayerState(targetid) == PLAYER_STATE_PASSENGER)
    {
        if(idiom[playerid] == 1) format(string, sizeof(string), "- destrua a lataria do veículo desse jogador, que o veículo irá destrancar.");
        else if(idiom[playerid] == 2) format(string, sizeof(string), "- destroy the bodywork of that player's vehicle, which the vehicle will unlock.");
        else if(idiom[playerid] == 3) format(string, sizeof(string), "- destruir la carrocería del vehículo de ese jugador, que el vehículo desbloqueará.");
        SendClientMessage(playerid, COLOR_LIGHTRED, string);
    }
}
forward MSG_VoiceLoginInfo(playerid, adminLvl, hasVoiceOnClient, bool:mobile);
public MSG_VoiceLoginInfo(playerid, adminLvl, hasVoiceOnClient, bool:mobile) {
    if(hasVoiceOnClient == 0) {
        if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Você não tem o plugin do VOICE instalado no seu GTA, então não vai conseguir ouvir nem falar com outros jogadores.");
        else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "You don't have the VOICE plugin installed in your GTA, so you won't be able to hear or talk to other players.");
        else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "No tienes el complemento VOICE instalado en tu GTA, por lo que no podrás escuchar ni hablar con otros jugadores.");
        if(mobile == true) {
            if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Instale um APK que tenha suporte ao VOIP (para ajudar: /discord)");
            else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "Install an APK that supports VOIP (to help: /discord)");
            else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "Instale un APK que admita VOIP (para ayudar: /discord)");
        }
        else if(mobile == false) {
            if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTRED, "Instale os arquivos de mod do VOIP na pasta do seu GTA (para ajudar: /discord)");
            else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTRED, "Install VOIP mod files in your GTA folder (to help: /discord)");
            else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTRED, "Instale archivos mod VOIP en su carpeta GTA (para ayudar: /discord)");
        }
    }
    else if(hasVoiceOnClient == 2) {
        if(idiom[playerid] == 1) {
            SendClientMessage(playerid, COLOR_LIGHTRED, "Não foi identificado um microfone no seu dispositivo para falar no VOICE!");
            SendClientMessage(playerid, COLOR_LIGHTRED, "- ative ele no menu do voice (F11)");
            SendClientMessage(playerid, COLOR_LIGHTRED, "- plugue um microfone em seu dispositivo");
        }
        else if(idiom[playerid] == 2) {
            SendClientMessage(playerid, COLOR_LIGHTRED, "A microphone has not been identified on your device to speak on VOICE!");
            SendClientMessage(playerid, COLOR_LIGHTRED, "- activate it in the voice menu (F11)");
            SendClientMessage(playerid, COLOR_LIGHTRED, "- plug a microphone into your device");
        }
        else if(idiom[playerid] == 3) {
            SendClientMessage(playerid, COLOR_LIGHTRED, "¡No se ha identificado un micrófono en su dispositivo para hablar en VOZ!");
            SendClientMessage(playerid, COLOR_LIGHTRED, "- activarlo en el menú de voz (F11)");
            SendClientMessage(playerid, COLOR_LIGHTRED, "- conecte un micrófono a su dispositivo");
        }
    }
    else if(hasVoiceOnClient == 1) {
        if(adminLvl >= 6) {
            if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Aperte 'Z' para falar no chat global");
            else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Press 'Z' to speak in global chat");
            else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Presione 'Z' para hablar en el chat global");
        }
        if(idiom[playerid] == 1) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Aperte 'B' para falar no chat local/radio");
        else if(idiom[playerid] == 2) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Press 'B' to speak in local/radio chat");
        else if(idiom[playerid] == 3) SendClientMessage(playerid, COLOR_LIGHTBLUE, "Presiona 'B' para hablar en el chat local/radio");
    }
}
forward MSG_CantAutoAimDisarmed(playerid, targetplayer);
public MSG_CantAutoAimDisarmed(playerid, targetplayer) {
    // player
    if(idiom[playerid] == 1) 
        SendClientMessage(playerid, COLOR_LIGHTRED, "<ANTI-DM> Jogadores SEM ARMA NO INVENTARIO nao podem ser rendidos!");
    else if(idiom[playerid] == 2) 
        SendClientMessage(playerid, COLOR_LIGHTRED, "<ANTI-DM> Players WITHOUT A WEAPON IN THE INVENTORY cannot be surrendered!");
    else if(idiom[playerid] == 3) 
        SendClientMessage(playerid, COLOR_LIGHTRED, "<ANTI-DM> !Los jugadores SIN UN ARMA EN EL INVENTARIO no pueden ser entregados!");
    // targetplayer
    if(idiom[targetplayer] == 1) 
        SendClientMessage(targetplayer, COLOR_LIGHTRED, "<ANTI-DM> Jogadores SEM ARMA NO INVENTARIO nao podem ser rendidos!");
    else if(idiom[targetplayer] == 2) 
        SendClientMessage(targetplayer, COLOR_LIGHTRED, "<ANTI-DM> Players WITHOUT A WEAPON IN THE INVENTORY cannot be surrendered!");
    else if(idiom[targetplayer] == 3) 
        SendClientMessage(targetplayer, COLOR_LIGHTRED, "<ANTI-DM> !Los jugadores SIN UN ARMA EN EL INVENTARIO no pueden ser entregados!");
    // 
    if(IsACop(playerid)) {
        // aviso cop para taze
        if(idiom[playerid] == 1) 
            SendClientMessage(playerid, COLOR_LIGHTRED, "<TAZE> Para imobilizar um jogador desarmado use o Soco Taze ou a Pistola Taze!");
        else if(idiom[playerid] == 2) 
            SendClientMessage(playerid, COLOR_LIGHTRED, "<TAZE> To immobilize an unarmed player, use Punch Taze or Pistol Taze!");
        else if(idiom[playerid] == 3) 
            SendClientMessage(playerid, COLOR_LIGHTRED, "<TAZE> !Para inmovilizar a un jugador desarmado, usa Punch Taze o Pistol Taze!");
    }
}
forward MSG_CantAutoAimNoWanted(playerid, targetid);
public MSG_CantAutoAimNoWanted(playerid, targetid) {
    new string[128];
    if(!IsACop(playerid)) {
        if(idiom[playerid] == 1) format(string, sizeof(string), "Civis sem nível de procurado (nome cor BRANCO) não podem ser rendidos no sistema de rendição.");
        else if(idiom[playerid] == 2) format(string, sizeof(string), "Civilians with no wanted level (WHITE color name) cannot be surrendered in the surrender system.");
        else if(idiom[playerid] == 3) format(string, sizeof(string), "Los civiles sin nivel de búsqueda (nombre de color blanco) no pueden entregarse en el sistema de entrega.");
        SendClientMessage(playerid, COLOR_LIGHTRED, string);
        if(idiom[targetid] == 1) format(string, sizeof(string), "Civis sem nível de procurado (nome cor BRANCO) não podem ser rendidos no sistema de rendição.");
        else if(idiom[targetid] == 2) format(string, sizeof(string), "Civilians with no wanted level (WHITE color name) cannot be surrendered in the surrender system.");
        else if(idiom[targetid] == 3) format(string, sizeof(string), "Los civiles sin nivel de búsqueda (nombre de color blanco) no pueden entregarse en el sistema de entrega.");
        SendClientMessage(targetid, COLOR_LIGHTRED, string);
    }
    if(IsACop(playerid)) {
        // 
        if(idiom[playerid] == 1) format(string, sizeof(string), "Civis sem nível de procurado (nome cor BRANCO) só podem ser rendidos em uma perseguição policial.");
        else if(idiom[playerid] == 2) format(string, sizeof(string), "Civilians with no wanted level (white color name) can only be surrendered in a police chase.");
        else if(idiom[playerid] == 3) format(string, sizeof(string), "Los civiles sin nivel de búsqueda (nombre de color blanco) solo pueden ser entregados en una persecución policial.");
        SendClientMessage(playerid, COLOR_LIGHTRED, string);
        // 
        if(idiom[targetid] == 1) format(string, sizeof(string), "Civis sem nível de procurado (nome cor BRANCO) só podem ser rendidos em uma perseguição policial.");
        else if(idiom[targetid] == 2) format(string, sizeof(string), "Civilians with no wanted level (white color name) can only be surrendered in a police chase.");
        else if(idiom[targetid] == 3) format(string, sizeof(string), "Los civiles sin nivel de búsqueda (nombre de color blanco) solo pueden ser entregados en una persecución policial.");
        SendClientMessage(targetid, COLOR_LIGHTRED, string);
        // start abordagem
        if(idiom[playerid] == 1) format(string, sizeof(string), "- inicie uma abordagem apertando H com uma viatura ou com um cacetete para poder render/revistar esse jogador!");
        else if(idiom[playerid] == 2) format(string, sizeof(string), "- start an approach by pressing H with a car or a club to be able to surrender/search that player!");
        else if(idiom[playerid] == 3) format(string, sizeof(string), "- ¡comienza un acercamiento presionando H con un auto o un palo para poder entregar/buscar a ese jugador!");
        SendClientMessage(playerid, COLOR_LIGHTRED, string);
    }
}
forward MSG_YouDidntHandcuffThisPlayer(playerid, targetid);
public MSG_YouDidntHandcuffThisPlayer(playerid, targetid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Não foi você quem algemou o jogador %s", PlayerName(targetid));
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You weren't the one who handcuffed player %s", PlayerName(targetid));
    else if(idiom[playerid] == 3) format(str, sizeof(str), "No fuiste tú quien esposó al jugador %s", PlayerName(targetid));
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_YouDidntTieThisPlayer(playerid, targetid);
public MSG_YouDidntTieThisPlayer(playerid, targetid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Não foi você quem amarrou o jogador %s", PlayerName(targetid));
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You weren't the one who tied up player %s", PlayerName(targetid));
    else if(idiom[playerid] == 3) format(str, sizeof(str), "No fuiste tú quien ató al jugador %s", PlayerName(targetid));
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_DmOffProtectHouseAttack(targetplayer, playerid);
public MSG_DmOffProtectHouseAttack(targetplayer, playerid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "<ANTI-DM> OFF! %s atacando a casa do jogador %s", PlayerName(targetplayer), PlayerName(playerid));
    else if(idiom[playerid] == 2) format(str, sizeof(str), "<ANTI-DM> OFF! %s attacking the player's house %s", PlayerName(targetplayer), PlayerName(playerid));
    else if(idiom[playerid] == 3) format(str, sizeof(str), "<ANTI-DM> OFF! %s atacando la casa del jugador %s", PlayerName(targetplayer), PlayerName(playerid));
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_InvalidNickname(playerid);
public MSG_InvalidNickname(playerid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Você escolheu um nome inválido, são aceitos apenas letras numeros (espaços também não são permitidos ' ', use underline: '_'");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You have chosen an invalid name, only letters and numbers are accepted (spaces are also not allowed ' ', use underscore: '_'");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Ha elegido un nombre no válido, solo se aceptan letras y números (los espacios tampoco están permitidos ' ', use guión bajo: '_'");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_ChangeHouseNoMoneyChangeHQ(playerid);
public MSG_ChangeHouseNoMoneyChangeHQ(playerid) {
  new str[128];
  if(idiom[playerid] == 1) format(str,sizeof(str),"Você trocou a HQ da sua facção, a casa antiga vai ficar sem dinheiro, coloque dinheiro no armario da casa ou poderá perde-la em alguns PayDays");
  else if(idiom[playerid] == 2) format(str,sizeof(str),"You changed your faction's HQ, the old house will run out of money, put money in the house closet or you may lose it in some PayDays");
  else if(idiom[playerid] == 3) format(str,sizeof(str),"Cambiaste el cuartel general de tu facción, la antigua casa se quedará sin dinero, pon dinero en el armario de la casa o puedes perderlo en algunos PayDays");
  SendClientMessage(playerid, COLOR_LIGHTRED, str);
  ShowPlayerDialog(playerid,20000,DIALOG_STYLE_MSGBOX,"ChangeHouseNoMoneyChangeHQ",str,"Ok","");
}
forward MSG_NoobCantEquipThisWeapon(playerid); public MSG_NoobCantEquipThisWeapon(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str,sizeof(str),"Jogadores novatos só podem equipar armas legalizadas adquiridas na Ammu Nation, jogue até pegar nível 5 para poder equipar essa arma!");
    }
    else if(idiom[playerid] == 2) {
        format(str,sizeof(str),"Novice players can only equip legal weapons purchased from Ammu Nation, play until you reach level 5 to equip this weapon!");
    }
    else if(idiom[playerid] == 3) {
        format(str,sizeof(str),"Los jugadores novatos solo pueden equipar armas legales compradas en Ammu Nation, ¡juega hasta llegar al nivel 5 para equipar esta arma!");
    }
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_VehUnraveled(playerid); public MSG_VehUnraveled(playerid) {
    new str[128];
    if(idiom[playerid] == 1) {
        format(str,sizeof(str),"Este carro foi desvendado! Você precisa esperar algumas horas ou reconstruí-lo usando: /rebuildcar");
    }
    else if(idiom[playerid] == 2) {
        format(str,sizeof(str),"This car was unraveled! You need to wait a few hours or rebuild using: /rebuildcar");
    }
    else if(idiom[playerid] == 3) {
        format(str,sizeof(str),"¡Este auto se deshizo! Necesitas esperar unas horas o reconstruirlo usando: /rebuildcar");
    }
    SendClientMessage(playerid, COLOR_WHITE, str);
}


forward MSG_DontHaveVehicleKeys(playerid); public MSG_DontHaveVehicleKeys(playerid) {
    // msg sem chave
    if(idiom[playerid] == 1)
    {
        SendClientMessage(playerid, COLOR_LIGHTRED, "[CHAVE]: Você nao tem a chave para ligar este veículo!");
    }
    else if(idiom[playerid] == 2)
    {
        SendClientMessage(playerid, COLOR_LIGHTRED, "[KEY]: You don't have the key to start this vehicle!");
    }
    else if(idiom[playerid] == 3)
    {
        SendClientMessage(playerid, COLOR_LIGHTRED, "[LLAVE]: ¡No tienes la llave para arrancar este vehículo!");
    }
    // msg ligacao direta
    if(CRIMINALskills[playerid] < 100) {
        MSG_DontHaveSkillLevelToCMD(playerid, "criminal", 100);
        return true;
    }
    if(idiom[playerid] == 1) { 
        ShowPlayerDialog(playerid, 56, DIALOG_STYLE_MSGBOX, "Vehicle Direct Connection Start", "Voce quer tentar fazer uma ligacao Direta nesse Veiculo?", "Sim", "Nao");
    }
    else if(idiom[playerid] == 2) { 
        ShowPlayerDialog(playerid, 56, DIALOG_STYLE_MSGBOX, "Vehicle Direct Connection Start", "Do you want to try a Vehicle Direct Connection?", "Yes", "No");
    }
    else if(idiom[playerid] == 3) { 
        ShowPlayerDialog(playerid, 56, DIALOG_STYLE_MSGBOX, "Vehicle Direct Connection Start", "!Quiere intentar hacer una MarcaciÃƒÂ¯Ã‚Â¿Ã‚Â½n Directa en este Vehiculo?", "Si", "No");
    }
    return 1;
}
forward MSG_CopAbordagemRec(playerid);
public MSG_CopAbordagemRec(playerid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Você já realizou uma abordagem recentemente, aguarde alguns minutos para realizar outra");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You have already performed an approach recently, wait a few minutes to perform another");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Ya has realizado un abordaje recientemente, espera unos minutos para realizar otro");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
    if(idiom[playerid] == 1) format(str, sizeof(str), "Evite abordar jogadores sem motivo para não ter esse problema, aborde apenas jogadores suspeitos ou proximo de ocorrências");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "Avoid approaching players without reason to not have this problem, only approach suspicious players or close to occurrences");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Evita acercarte a jugadores sin motivo para no tener este problema, solo acércate a jugadores sospechosos o cercanos a ocurrencias");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
stock GetCrimeName(crimeid, auxIdiom) {
    new wantedname[64];
    if(crimeid == 1) {
        if(auxIdiom == 1) wantedname = "Sequestro";
        else if(auxIdiom == 2) wantedname = "Kidnapping";
        else if(auxIdiom == 3) wantedname = "Secuestro";
    }
    else if(crimeid == 2) {
        if(auxIdiom == 1) wantedname = "Assassinato";
        else if(auxIdiom == 2) wantedname = "Murder";
        else if(auxIdiom == 3) wantedname = "Asesinato";
    }
    else if(crimeid == 3) {
        if(auxIdiom == 1) wantedname = "Tentativa de Homicidio";
        else if(auxIdiom == 2) wantedname = "Homicide Attempted";
        else if(auxIdiom == 3) wantedname = "Intento de Homicidio";
    }
    else if(crimeid == 4) {
        if(auxIdiom == 1) wantedname = "Roubo";
        else if(auxIdiom == 2) wantedname = "Theft";
        else if(auxIdiom == 3) wantedname = "Robo";
    }
    else if(crimeid == 5) {
        if(auxIdiom == 1) wantedname = "Direcao Perigosa";
        else if(auxIdiom == 2) wantedname = "Dangerous Driving";
        else if(auxIdiom == 3) wantedname = "Conduccion Peligrosa";
    }
    else if(crimeid == 6) {
        if(auxIdiom == 1) wantedname = "Trafico";
        else if(auxIdiom == 2) wantedname = "Trafficking";
        else if(auxIdiom == 3) wantedname = "Trafico";
    }
    else if(crimeid == 7) {
        if(auxIdiom == 1) wantedname = "Porte Ilegal de Armas";
        else if(auxIdiom == 2) wantedname = "Illegal Porting of Weapons";
        else if(auxIdiom == 3) wantedname = "Portacion Ilegal de Armas";
    }
    else if(crimeid == 8) {
        if(auxIdiom == 1) wantedname = "Porte Ilegal de Drogas";
        else if(auxIdiom == 2) wantedname = "Illegal Porting of Drugs";
        else if(auxIdiom == 3) wantedname = "Portacion Ilegal de Drogas";
    }
    else if(crimeid == 9) {
        if(auxIdiom == 1) wantedname = "Fuga";
        else if(auxIdiom == 2) wantedname = "Escape";
        else if(auxIdiom == 3) wantedname = "Escapar";
    }
    else if(crimeid == 10) {
        if(auxIdiom == 1) wantedname = "Agressao";
        else if(auxIdiom == 2) wantedname = "Aggression";
        else if(auxIdiom == 3) wantedname = "Agresion";
    }
    else if(crimeid == 11) {
        if(auxIdiom == 1) wantedname = "Cumplice";
        else if(auxIdiom == 2) wantedname = "Accomplice";
        else if(auxIdiom == 3) wantedname = "Complice";
    }
    else if(crimeid == 12) {
        if(auxIdiom == 1) wantedname = "Sem Carteira de Motorista";
        else if(auxIdiom == 2) wantedname = "No Driver's License";
        else if(auxIdiom == 3) wantedname = "Sin licencia de Conducir";
    }
    else if(crimeid == 13) {
        if(auxIdiom == 1) wantedname = "Invasao de Domicilio";
        else if(auxIdiom == 2) wantedname = "Home Invasion";
        else if(auxIdiom == 3) wantedname = "Invasion de Casa";
    }
    else if(crimeid == 14) {
        if(auxIdiom == 1) wantedname = "Guerra Territorial";
        else if(auxIdiom == 2) wantedname = "Territory War";
        else if(auxIdiom == 3) wantedname = "Territorio de Guerra";
    }
    else if(crimeid == 15) {
        if(auxIdiom == 1) wantedname = "Estupro";
        else if(auxIdiom == 2) wantedname = "Rape";
        else if(auxIdiom == 3) wantedname = "Violacion";
    }
    else if(crimeid == 16) {
        if(auxIdiom == 1) wantedname = "Roubando Pacote do Exercito";
        else if(auxIdiom == 2) wantedname = "Stealing Army Package";
        else if(auxIdiom == 3) wantedname = "Robo del paquete del Ejercito";
    }
    else if(crimeid == 17) {
        if(auxIdiom == 1) wantedname = "Terrorismo";
        else if(auxIdiom == 2) wantedname = "Terrorism";
        else if(auxIdiom == 3) wantedname = "Terrorismo";
    }
    else if(crimeid == 18) {
        if(auxIdiom == 1) wantedname = "Atirando em Publico";
        else if(auxIdiom == 2) wantedname = "Shotting in Public";
        else if(auxIdiom == 3) wantedname = "Disparando en Publica";
    }
    else if(crimeid == 19) {
        if(auxIdiom == 1) wantedname = "Corrupcao";
        else if(auxIdiom == 2) wantedname = "Corruption";
        else if(auxIdiom == 3) wantedname = "Corrupcion";
    }
    else if(crimeid == 20) {
        if(auxIdiom == 1) wantedname = "Falsidade Ideologica";
        else if(auxIdiom == 2) wantedname = "Ideological Falsehood";
        else if(auxIdiom == 3) wantedname = "Falsedad Ideologica";
    }
    else if(crimeid == 21) {
        if(auxIdiom == 1) wantedname = "Desrespeito a Ordem Policial";
        else if(auxIdiom == 2) wantedname = "Disrespect the Police Order";
        else if(auxIdiom == 3) wantedname = "Desrespeto a Orden Policial";
    }
    else if(crimeid == 22) {
        if(auxIdiom == 1) wantedname = "Roubo de Veiculo";
        else if(auxIdiom == 2) wantedname = "Vehicle Theft";
        else if(auxIdiom == 3) wantedname = "Robo de Vehiculos";
    }
    else if(crimeid == 23) {
        if(auxIdiom == 1) wantedname = "Assassinato com Brutalidade excessiva";
        else if(auxIdiom == 2) wantedname = "Murder with excessive Brutality";
        else if(auxIdiom == 3) wantedname = "Asesinato con brutalidad excesiva";
    }
    return wantedname;
}
forward MSG_AutoSuNovatoEntender(playerid);
public MSG_AutoSuNovatoEntender(playerid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Não foi o policial que te colocou como procurado, é o proprio servidor de forma automatica que coloca quando você comete um crime perto de um policial");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "It wasn't the police that put you as wanted, it's the server itself that automatically puts you when you commit a crime near a police");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "No fue la policia la que te puso como buscado, es el propio servidor el que te pone automaticamente cuando cometes un delito cerca de un policia");
    SendClientMessage(playerid, -1, str);
    if(idiom[playerid] == 1) format(str, sizeof(str), "É impossível ter abusos, alguma ação no jogo te gerou esse nível de procurado, tente entender a dinamica do jogo para entender o porque você ficou procurado");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "It is impossible to have abuses, some action in the game generated this wanted level, try to understand the dynamics of the game to understand why you were wanted");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Es imposible tener abusos, alguna acción en el juego generó este nivel buscado, trata de entender la dinámica del juego para entender porque te buscaban");
    SendClientMessage(playerid, -1, str);
}
forward CacaTesouroInfo(playerid); public CacaTesouroInfo(playerid) {
    if(idiom[playerid] == 1) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Fique na agua e perto de barcos para participar das Cacoesas a tesouro nos horarios das Cacoesas.");
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Server horarios de Caça Tesouro: [10:00], [20:00]");
    }
    else if(idiom[playerid] == 2) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Stay in the water and near boats to participate in treasure hunts at hunting times.");
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Treasure Hunting Server Times: [10:00], [20:00]");
    }
    else if(idiom[playerid] == 3) {
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Manténgase en el agua y cerca de los barcos para participar en el tesoro de Cacoesas en los horarios de Cacoesas.");
        SendClientMessage(playerid, COLOR_LIGHTBLUE, "Horas del servidor Treasure Hunt: [10:00], [20:00]");
    }
}
forward MSG_PickUpMarijuana(playerid, ammount);
public MSG_PickUpMarijuana(playerid, ammount) {
    new string[128];
    if(idiom[playerid] == 1) format(string, sizeof(string), "Voce pegou [%i] Maconha", ammount);
    else if(idiom[playerid] == 2) format(string, sizeof(string), "You got [%i] Marijuana", ammount);
    else if(idiom[playerid] == 3) format(string, sizeof(string), "Usted ha tomado [%i] Marihuana", ammount);
}
forward MSG_ManufacturedDrugs(playerid, itemid, ammount);
public MSG_ManufacturedDrugs(playerid, itemid, ammount) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Você fabricou: %s", GetItemName(itemid, ammount, idiom[playerid]) );
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You crafted: %s", GetItemName(itemid, ammount, idiom[playerid]) );
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Creaste: %s", GetItemName(itemid, ammount, idiom[playerid]) );
    SendClientMessage(playerid, COLOR_GREEN, str);
}
forward MSG_NewbieCantAccomplice(playerid, novatoLvl);
public MSG_NewbieCantAccomplice(playerid, novatoLvl) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Você não recebeu dinheiro de Cumplice do roubo, jogadores novatos (nível %i pra baixo) não podem participar de um roubo como Cumplice.", novatoLvl);
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You have not received any money from the Heist's Accomplice, novice players (level %i and below) cannot participate in a heist as an Accomplice.", novatoLvl);
    else if(idiom[playerid] == 3) format(str, sizeof(str), "No has recibido dinero del cómplice del atraco, los jugadores novatos (nivel %i e inferior) no pueden participar en un atraco como cómplice.", novatoLvl);
    SendClientMessage(playerid, COLOR_LIGHTBLUE, str);
}
forward MSG_GzDrugsProfit(playerid, gzid, facid, gzSalaryBonus);
public MSG_GzDrugsProfit(playerid, gzid, facid, gzSalaryBonus) {
    if(GangZoneInfo[gzid][gzOwned] == facid) {
        new drugsText[32];
        if(GangZoneInfo[gzid][gzMaconha] == 0 && GangZoneInfo[gzid][gzCocaina] == 0 && GangZoneInfo[gzid][gzCrack] == 0) {
            if(idiom[playerid] == 1) format(drugsText, sizeof(drugsText), "lucro reduzido, zona sem drogas");
            else if(idiom[playerid] == 2) format(drugsText, sizeof(drugsText), "reduced profit, drug free zone");
            else if(idiom[playerid] == 3) format(drugsText, sizeof(drugsText), "beneficio reducido, zona libre de drogas");
        }
        else if(GangZoneInfo[gzid][gzMaconha] > 0 && GangZoneInfo[gzid][gzCocaina] == 0 && GangZoneInfo[gzid][gzCrack] == 0) {
            format(drugsText, sizeof(drugsText), "%i maconha", GangZoneInfo[gzid][gzMaconha]);
        }
        else if(GangZoneInfo[gzid][gzMaconha] > 0 && GangZoneInfo[gzid][gzCocaina] > 0 && GangZoneInfo[gzid][gzCrack] == 0) {
            format(drugsText, sizeof(drugsText), "%i maconha, %i cocaina", GangZoneInfo[gzid][gzMaconha], GangZoneInfo[gzid][gzCocaina]);
        }
        else if(GangZoneInfo[gzid][gzMaconha] == 0 && GangZoneInfo[gzid][gzCocaina] > 0 && GangZoneInfo[gzid][gzCrack] > 0) {
            format(drugsText, sizeof(drugsText), "%i cocaina, %i crack", GangZoneInfo[gzid][gzMaconha], GangZoneInfo[gzid][gzCocaina]);
        }
        else if(GangZoneInfo[gzid][gzMaconha] > 0 && GangZoneInfo[gzid][gzCocaina] > 0 && GangZoneInfo[gzid][gzCrack] > 0) {
            format(drugsText, sizeof(drugsText), "%i maconha, %i cocaina %i crack", GangZoneInfo[gzid][gzMaconha], GangZoneInfo[gzid][gzCocaina], GangZoneInfo[gzid][gzCrack]);
        }
        new closedPoliceText[32];
        if(GangZoneInfo[gzid][gzClosed] == true) {
            format(closedPoliceText, sizeof(closedPoliceText), "[CLOSED] ");
        }
        new gstring[128];
        format(gstring, sizeof(gstring), "gz: %s %s%s: +%i", GangZoneInfo[gzid][gzName], closedPoliceText, drugsText, gzSalaryBonus);
        SendClientMessage(playerid, COLOR_LIGHTBLUE, gstring);
    }
}
forward MSG_NoOneClooserToYouBloodbag(playerid);
public MSG_NoOneClooserToYouBloodbag(playerid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Não tem ninguém morrendo perto de você para você levantar com a sua Bolsa de Sangue!");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "There's no one dying near you for you to pick up with your Blood Bag!");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "¡No hay nadie muriendo cerca de ti para que lo recojas con tu bolsa de sangre!");
    SendClientMessage(playerid, COLOR_LIGHTRED, str);
}
forward MSG_PickCocainePaste(playerid);
public MSG_PickCocainePaste(playerid) {
    new str[128];
    if(idiom[playerid] == 1) format(str, sizeof(str), "Voce pegou uma Pasta de Cocacoesna");
    else if(idiom[playerid] == 2) format(str, sizeof(str), "You got a Paste of Cocaine");
    else if(idiom[playerid] == 3) format(str, sizeof(str), "Usted ha tomado una Pasta de Cocacoesna");
    SendClientMessage(playerid, COLOR_GREEN, str);
}

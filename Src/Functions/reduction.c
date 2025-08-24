double reduction(double armor, double damage, int not_true_damage) {
    if (not_true_damage) {
        if (armor < 0) {
            return damage * (2.0 - (100.0 / (100.0 - armor)));
        } else {
            return damage * (100.0 / (100.0 + armor));
        }
    } else {
        return damage;
    }
}

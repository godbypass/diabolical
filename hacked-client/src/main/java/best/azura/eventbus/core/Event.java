package best.azura.eventbus.core;

import hydrogen.Hydrogen;

public interface Event{

    default Event fire() {
        Hydrogen.getInstance().getEventBus().call(this);
        return this;
    }
}
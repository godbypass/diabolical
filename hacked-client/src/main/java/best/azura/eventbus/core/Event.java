package best.azura.eventbus.core;

import wtf.diablo.client.core.impl.Diablo;

public interface Event{

    default Event fire() {
        Diablo.getInstance().getEventBus().call(this);
        return this;
    }
}
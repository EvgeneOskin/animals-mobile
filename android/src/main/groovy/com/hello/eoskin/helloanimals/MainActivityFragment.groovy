package com.hello.eoskin.helloanimals

import android.support.v4.app.Fragment
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import groovy.transform.CompileStatic


/**
 * A placeholder fragment containing a simple view.
 */
class MainActivityFragment extends Fragment {

    @CompileStatic
    def MainActivityFragment() {
    }

    @Override
    @CompileStatic
    View onCreateView(LayoutInflater inflater, ViewGroup container,
                      Bundle savedInstanceState) {
        return inflater.inflate(R.layout.fragment_main, container, false)
    }
}

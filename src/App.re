[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(Store.reducer, Store.initalState);
  <div>
    <Store.Provider value=(state, dispatch)>
      <p> {ReasonReact.string("Global demo state using useReducer")} </p>
      <Counter />
      <Counter />
    </Store.Provider>
  </div>;
};